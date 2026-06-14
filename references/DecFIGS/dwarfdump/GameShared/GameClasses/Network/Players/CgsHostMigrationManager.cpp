// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsHostMigrationManager.cpp:26
	const float_t KF_HOSTKEEPALIVE_SEND_TIMEOUT;

	// CgsHostMigrationManager.cpp:27
	const float_t KF_HOSTKEEPALIVE_TIMEOUT;

	// CgsHostMigrationManager.cpp:28
	const float_t KF_HOSTKEEPALIVE_INITIAL_TIMEOUT;

	// CgsHostMigrationManager.cpp:30
	const uint16_t KU16_HOSTKEEPALIVE_SEND_TIMEOUT50 = 20;

	// CgsHostMigrationManager.cpp:31
	const uint16_t KU16_HOSTKEEPALIVE_TIMEOUT50 = 150;

	// CgsHostMigrationManager.cpp:32
	const uint16_t KU16_HOSTKEEPALIVE_INITIAL_TIMEOUT50 = 500;

	// CgsHostMigrationManager.cpp:34
	const uint16_t KU16_HOSTKEEPALIVE_SEND_TIMEOUT60 = 24;

	// CgsHostMigrationManager.cpp:35
	const uint16_t KU16_HOSTKEEPALIVE_TIMEOUT60 = 180;

	// CgsHostMigrationManager.cpp:36
	const uint16_t KU16_HOSTKEEPALIVE_INITIAL_TIMEOUT60 = 600;

	// CgsHostMigrationManager.cpp:49
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID gQuickSortHostPlayerID;

}

// CgsHostMigrationManager.cpp:1348
void CgsNetwork::HostMigrationManager::ClearAllCallbacks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:1350
		int32_t liIndex;

	}
}

// CgsHostMigrationManager.cpp:257
void CgsNetwork::HostMigrationManager::InitialiseHostKeepAliveReceivedTime(uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHostMigrationManager.cpp:725
void CgsNetwork::HostMigrationManager::GetHostPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHostMigrationManager.cpp:1311
void CgsNetwork::HostMigrationManager::SetNewHost(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lNewHostID, const TimerStatus *  lpTimerStatus, uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:1313
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lOldHostID;

		// CgsHostMigrationManager.cpp:1314
		int32_t liCallbackIndex;

	}
}

// CgsHostMigrationManager.cpp:1004
void CgsNetwork::HostMigrationManager::QSortCallback(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:1006
		int32_t * lpResultsData1;

		// CgsHostMigrationManager.cpp:1007
		int32_t * lpResultsData2;

	}
}

// CgsHostMigrationManager.cpp:1106
void CgsNetwork::HostMigrationManager::Disable(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lGameRoomHostID, const TimerStatus *  lpTimerStatus, uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHostMigrationManager.cpp:1224
void CgsNetwork::HostMigrationManager::IsHostAlive(uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UInt16IsLargerWrapped(/* parameters */);
	UInt16IsLargerOrEqualWrapped(/* parameters */);
	GetFrameDiffWrapped16(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
}

// CgsHostMigrationManager.cpp:100
void CgsNetwork::HostMigrationManager::SetFrameRate(CgsSystem::EFrameRate  leFrameRate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsHostMigrationManager.cpp:174
void CgsNetwork::HostMigrationManager::Prepare(CgsNetwork::PlayerManager *  lpPlayerManager, CgsSystem::EFrameRate  leLocalConsoleFrameRate, uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:176
		int32_t liPlayerIndex;

	}
}

// CgsHostMigrationManager.cpp:145
void CgsNetwork::HostMigrationManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHostMigrationManager.cpp:64
void CgsNetwork::HostMigrationManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:66
		int32_t liIndex;

	}
}

// CgsHostMigrationManager.cpp:866
void CgsNetwork::HostMigrationManager::RegisterMessages(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[17] __FUNCTION__;

	{
		// CgsHostMigrationManager.cpp:868
		CgsNetwork::NetworkPlayer * lpNetPlayer;

		// CgsHostMigrationManager.cpp:869
		int32_t liFreeEntry;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsHostMigrationManager.cpp:876
		int32_t liIndex;

	}
	HostKeepAliveMessage::Construct(/* parameters */);
	HostKeepAliveMessage::Construct(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsHostMigrationManager.cpp:739
void CgsNetwork::HostMigrationManager::AddPlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[10] __FUNCTION__;

	{
		// CgsHostMigrationManager.cpp:741
		int32_t liArrayIndex;

		// CgsHostMigrationManager.cpp:747
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsHostMigrationManager.cpp:1125
void CgsNetwork::HostMigrationManager::RegisterHostMigrationCallback(HostMigrationManager::HostMigrationCallback *  lpCallback, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:1127
		int32_t liIndex;

		{
			// CgsHostMigrationManager.cpp:1140
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// CgsHostMigrationManager.cpp:1154
void CgsNetwork::HostMigrationManager::UnregisterHostMigrationCallback(HostMigrationManager::HostMigrationCallback *  lpCallback) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:1156
		int32_t liIndex;

		{
			// CgsHostMigrationManager.cpp:1169
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// CgsHostMigrationManager.cpp:1184
void CgsNetwork::HostMigrationManager::ABecomesHostBeforeB(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerIDa, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerIDb) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:1186
		int32_t liIndex;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
			// CgsHostMigrationManager.cpp:1210
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsHostMigrationManager.cpp:931
void CgsNetwork::HostMigrationManager::UnregisterMessages(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:933
		CgsNetwork::NetworkPlayer * lpNetPlayer;

		// CgsHostMigrationManager.cpp:934
		int32_t liEntry;

	}
}

// CgsHostMigrationManager.cpp:780
void CgsNetwork::HostMigrationManager::RemovePlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:782
		int32_t liArrayIndex;

		// CgsHostMigrationManager.cpp:817
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

	}
	{
		// CgsHostMigrationManager.cpp:793
		int32_t liNumEntriesToMove;

	}
}

// CgsHostMigrationManager.cpp:837
void CgsNetwork::HostMigrationManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:839
		int32_t liArrayIndex;

	}
}

// CgsHostMigrationManager.cpp:426
void CgsNetwork::HostMigrationManager::SendHostKeepAliveMessage(CgsNetwork::NetworkPlayer *  lpNetPlayer, uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:428
		HostKeepAliveMessage * lpMessage;

	}
	HostKeepAliveMessage::PrepareForSend(/* parameters */);
	Message::SetReadyToSend(/* parameters */);
	Message::SetType(/* parameters */);
	Message::SetU16Frame(/* parameters */);
}

// CgsHostMigrationManager.cpp:401
void CgsNetwork::HostMigrationManager::SendNewHostMessage(CgsNetwork::NetworkPlayer *  lpNetPlayer, uint16_t  lu16CurrentFrame, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lNewHostPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *  laClientIDs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:403
		NewHostMessage * lpMessage;

	}
}

// CgsHostMigrationManager.cpp:1256
void CgsNetwork::HostMigrationManager::UpdateSendingOfHostKeepAliveMessage(uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:1283
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

	}
	UInt16IsLargerWrapped(/* parameters */);
	UInt16IsLargerWrapped(/* parameters */);
	UInt16IsLargerOrEqualWrapped(/* parameters */);
	{
		// CgsHostMigrationManager.cpp:1286
		CgsNetwork::NetworkPlayer * lpNetPlayer;

	}
	UInt16IsLargerOrEqualWrapped(/* parameters */);
}

// CgsHostMigrationManager.cpp:1063
void CgsNetwork::HostMigrationManager::Enable(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lHostID, const TimerStatus *  lpTimerStatus, uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:1065
		int32_t liPlayerIndex;

		// CgsHostMigrationManager.cpp:1071
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

	}
}

// CgsHostMigrationManager.cpp:968
void CgsNetwork::HostMigrationManager::UnregisterMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:971
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

	}
	{
		// CgsHostMigrationManager.cpp:974
		CgsNetwork::NetworkPlayer * lpNetPlayer;

	}
}

// CgsHostMigrationManager.cpp:221
void CgsNetwork::HostMigrationManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:223
		int32_t liDataCount;

	}
	HostKeepAliveMessage::Construct(/* parameters */);
	HostKeepAliveMessage::Construct(/* parameters */);
}

// CgsHostMigrationManager.cpp:517
void CgsNetwork::HostMigrationManager::FindNextHostAndSend(const TimerStatus *  lpTimerStatus, uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:519
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID[8] laReceivedClientsIDs;

		// CgsHostMigrationManager.cpp:520
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lNewHostIDToSet;

		// CgsHostMigrationManager.cpp:521
		CgsNetwork::NetworkPlayer * lpClientPlayer;

		// CgsHostMigrationManager.cpp:522
		int32_t i;

		// CgsHostMigrationManager.cpp:523
		int32_t liIndex;

		// CgsHostMigrationManager.cpp:525
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

		// CgsHostMigrationManager.cpp:585
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

	}
	PlayerManager::GetNextLocalPlayerID(/* parameters */);
	{
		// CgsHostMigrationManager.cpp:543
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsHostMigrationManager.cpp:597
		int32_t lnCheck1;

		// CgsHostMigrationManager.cpp:598
		int32_t lnCheck2;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	NetworkPlayer::GetName(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsHostMigrationManager.cpp:453
void CgsNetwork::HostMigrationManager::SendNewHostMessageIfRequired(uint16_t  lu16CurrentFrame, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lBestNewHostID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *  laBestReceivedClientsIDs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:458
		CgsNetwork::NetworkPlayer * lpClientPlayer;

		// CgsHostMigrationManager.cpp:459
		int32_t liIndex2;

		// CgsHostMigrationManager.cpp:462
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

		{
			// CgsHostMigrationManager.cpp:485
			int32_t lnCheck1;

			// CgsHostMigrationManager.cpp:486
			int32_t lnCheck2;

		}
	}
}

// CgsHostMigrationManager.cpp:287
void CgsNetwork::HostMigrationManager::FindBestHostIDs(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *  lpBestHostKeepAlivePlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *  lpBestNewHostPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *  laBestReceivedClientsIDs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:289
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID[8] laReceivedClientsIDs;

		// CgsHostMigrationManager.cpp:290
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lBestKeepAliveHostID;

		// CgsHostMigrationManager.cpp:291
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lBestNewHostID;

		// CgsHostMigrationManager.cpp:292
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lFoundHostID;

		// CgsHostMigrationManager.cpp:293
		HostKeepAliveMessage * lpHostKeepAliveMessage;

		// CgsHostMigrationManager.cpp:294
		NewHostMessage * lpNewHostMessage;

		// CgsHostMigrationManager.cpp:295
		int32_t liIndex2;

		// CgsHostMigrationManager.cpp:303
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

	}
	{
		// CgsHostMigrationManager.cpp:306
		CgsNetwork::NetworkPlayer * lpNetPlayer;

		HostKeepAliveMessage::Retrieve(/* parameters */);
		Message::Release(/* parameters */);
		NetworkPlayer::GetPlayerID(/* parameters */);
		{
			// CgsHostMigrationManager.cpp:336
			int32_t lnCheck1;

			// CgsHostMigrationManager.cpp:337
			int32_t lnCheck2;

		}
	}
	{
		// CgsHostMigrationManager.cpp:360
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

		PlayerManager::GetNextLocalPlayerID(/* parameters */);
	}
}

// CgsHostMigrationManager.cpp:632
void CgsNetwork::HostMigrationManager::Update(const TimerStatus *  lpTimerStatus, uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHostMigrationManager.cpp:634
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID[8] laBestReceivedClientsIDs;

		// CgsHostMigrationManager.cpp:635
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lBestKeepAliveHostID;

		// CgsHostMigrationManager.cpp:636
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lBestNewHostID;

		// CgsHostMigrationManager.cpp:637
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lNewHostIDToSet;

		// CgsHostMigrationManager.cpp:638
		CgsNetwork::NetworkPlayer * lpHostPlayer;

		// CgsHostMigrationManager.cpp:639
		bool lbChangedHost;

		{
			// CgsHostMigrationManager.cpp:656
			HostKeepAliveMessage * lpHostKeepAliveMsg;

			HostKeepAliveMessage::Retrieve(/* parameters */);
		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

