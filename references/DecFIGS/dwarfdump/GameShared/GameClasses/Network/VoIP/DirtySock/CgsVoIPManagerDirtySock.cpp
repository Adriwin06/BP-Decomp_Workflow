// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsVoIPManagerDirtySock.cpp:36
	const int32_t KI_FRAME_GAP_BETWEEN_VOIP_UPDATE = 2;

}

// CgsVoIPManagerDirtySock.cpp:111
void CgsNetwork::VoIPManager::ClearData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVoIPManagerDirtySock.cpp:113
		int32_t liIndex;

	}
}

// CgsVoIPManagerDirtySock.cpp:94
void CgsNetwork::VoIPManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoIPManagerDirtySock.cpp:71
void CgsNetwork::VoIPManager::Construct(CgsNetwork::NetworkManager *  lpNetworkManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoIPManagerDirtySock.cpp:752
void CgsNetwork::VoIPManager::DoesLocalPlayerHaveHeadset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoIPManagerDirtySock.cpp:815
void CgsNetwork::VoIPManager::SetBroadcastClients(uint32_t  luActiveConnections) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoIPManagerDirtySock.cpp:895
void CgsNetwork::VoIPManager::SetVoipVolume(int32_t  liVoipVolumePercent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoIPManagerDirtySock.cpp:912
void CgsNetwork::VoIPManager::GetVoipVolume() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoIPManagerDirtySock.cpp:865
void CgsNetwork::VoIPManager::GetIndexFromPlayerName(const char *  lpcPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVoIPManagerDirtySock.cpp:867
		int32_t liIndex;

	}
	{
		// CgsVoIPManagerDirtySock.cpp:874
		const char * lpcName;

	}
	UsernameCompare(/* parameters */);
}

// CgsVoIPManagerDirtySock.cpp:777
void CgsNetwork::VoIPManager::GetConnectionMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVoIPManagerDirtySock.cpp:779
		VoIPClient lClient;

		// CgsVoIPManagerDirtySock.cpp:780
		int32_t liIndex;

		// CgsVoIPManagerDirtySock.cpp:781
		uint32_t luMask;

		operator=(/* parameters */);
	}
}

// CgsVoIPManagerDirtySock.cpp:285
void CgsNetwork::VoIPManager::UpdateLocalPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVoIPManagerDirtySock.cpp:287
		int32_t liFlags;

		// CgsVoIPManagerDirtySock.cpp:288
		CgsNetwork::ENetworkHeadsetPlayerStatus leNewHeadsetStatus;

		// CgsVoIPManagerDirtySock.cpp:289
		bool lbHasHeadset;

	}
	{
		// CgsVoIPManagerDirtySock.cpp:326
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

		PlayerManager::GetNextLocalPlayerID(/* parameters */);
	}
}

// CgsVoIPManagerDirtySock.cpp:571
void CgsNetwork::VoIPManager::UpdateConnectionIDsAndSendMask(CgsNetwork::ServerInterface *  lpServerInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVoIPManagerDirtySock.cpp:574
		ConnApiRefT * lpConnApi;

		// CgsVoIPManagerDirtySock.cpp:575
		const ConnApiClientListT * lpClientList;

		// CgsVoIPManagerDirtySock.cpp:576
		const ConnApiClientListT::ConnApiClientT * lpClient;

		// CgsVoIPManagerDirtySock.cpp:577
		int32_t liIndex;

		// CgsVoIPManagerDirtySock.cpp:578
		int32_t liVoipConnID;

		// CgsVoIPManagerDirtySock.cpp:579
		uint32_t luMask;

	}
	ServerInterfaceDirtySock::GetConnAPIRef(/* parameters */);
	{
		// CgsVoIPManagerDirtySock.cpp:595
		int32_t liEntryIndex;

		{
			// CgsVoIPManagerDirtySock.cpp:602
			PlayerName lPlayerName;

			PlayerName::Construct(/* parameters */);
			CgsCore::StrnCpy(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsVoIPManagerDirtySock.cpp:554
void CgsNetwork::VoIPManager::RemotePlayerFinalised(CgsNetwork::ServerInterface *  lpServerInterface, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoIPManagerDirtySock.cpp:441
void CgsNetwork::VoIPManager::HandleReceivedHeadsetStatus(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID, CgsNetwork::ENetworkHeadsetPlayerStatus  leHeadsetStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVoIPManagerDirtySock.cpp:443
		CgsNetwork::NetworkPlayer * lpNetPlayer;

	}
	{
		// CgsVoIPManagerDirtySock.cpp:451
		bool lbIsMuted;

		// CgsVoIPManagerDirtySock.cpp:466
		PlayerName lPlayerName;

		NetworkPlayer::GetName(/* parameters */);
		PlayerName::Construct(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
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
}

// CgsVoIPManagerDirtySock.cpp:726
void CgsNetwork::VoIPManager::UnregisterMessage(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVoIPManagerDirtySock.cpp:728
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
}

// CgsVoIPManagerDirtySock.cpp:637
void CgsNetwork::VoIPManager::RemovePlayer(CgsNetwork::ServerInterface *  lpServerInterface, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVoIPManagerDirtySock.cpp:641
		VoIPClient lClient;

		// CgsVoIPManagerDirtySock.cpp:642
		int32_t liIndex;

	}
	PlayerManager::IsLocalPlayer(/* parameters */);
}

// CgsVoIPManagerDirtySock.cpp:210
void CgsNetwork::VoIPManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVoIPManagerDirtySock.cpp:213
		int32_t liIndex;

	}
}

// CgsVoIPManagerDirtySock.cpp:151
void CgsNetwork::VoIPManager::Prepare(CgsNetwork::PlayerManager *  lpPlayerManager, CgsNetwork::TimeManager *  lpTimeManager, CgsNetwork::ServerInterface *  lpServerInterface, CgsNetwork::BuddyManagerBase *  lpBuddyManager, bool  lbIsVoiceAllowed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsVoIPManagerDirtySock.cpp:838
void CgsNetwork::VoIPManager::GetIndexFromID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[15] __FUNCTION__;

	{
		// CgsVoIPManagerDirtySock.cpp:840
		int32_t liIndex;

	}
	{
		// CgsVoIPManagerDirtySock.cpp:851
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsVoIPManagerDirtySock.cpp:694
void CgsNetwork::VoIPManager::RegisterMessage(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVoIPManagerDirtySock.cpp:696
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// CgsVoIPManagerDirtySock.cpp:697
		int32_t liIndex;

	}
}

// CgsVoIPManagerDirtySock.cpp:495
void CgsNetwork::VoIPManager::AddPlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVoIPManagerDirtySock.cpp:498
		int32_t liIndex;

	}
	PlayerManager::IsLocalPlayer(/* parameters */);
}

// CgsVoIPManagerDirtySock.cpp:384
void CgsNetwork::VoIPManager::UpdateHeadsetStatusMessages(bool  lbAreWePlaying) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVoIPManagerDirtySock.cpp:386
		int32_t liIndex;

		// CgsVoIPManagerDirtySock.cpp:387
		uint8_t lu8HeadsetStatus;

	}
	{
		// CgsVoIPManagerDirtySock.cpp:392
		uint16_t lu16FrameCount;

		// CgsVoIPManagerDirtySock.cpp:400
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

	}
}

// CgsVoIPManagerDirtySock.cpp:259
void CgsNetwork::VoIPManager::Update(bool  lbAreWePlaying) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

