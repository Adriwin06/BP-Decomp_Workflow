// CgsSyncTimeHost.cpp:47
void CgsNetwork::SyncTimeHost::Construct(CgsNetwork::PlayerManager *  lpPlayerManager, SyncTimeMessageManager *  lpMessageManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSyncTimeHost.cpp:152
void CgsNetwork::SyncTimeHost::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSyncTimeHost.cpp:135
void CgsNetwork::SyncTimeHost::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSyncTimeHost.cpp:68
void CgsNetwork::SyncTimeHost::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSyncTimeHost.cpp:90
void CgsNetwork::SyncTimeHost::Update(uint16_t  lu16FrameNumber, Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSyncTimeHost.cpp:92
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

		// CgsSyncTimeHost.cpp:93
		CgsNetwork::SyncTimeMessage * lpMessage;

	}
	PlayerManager::GetNextLocalPlayerID(/* parameters */);
	{
		// CgsSyncTimeHost.cpp:102
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lMessageClientPlayerID;

		// CgsSyncTimeHost.cpp:103
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lMessageHostPlayerID;

		// CgsSyncTimeHost.cpp:104
		Time lMessageClientTime;

		// CgsSyncTimeHost.cpp:105
		Time lMessageHostTime;

		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
	}
	CgsSystem::Time::GetFloatVal(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

