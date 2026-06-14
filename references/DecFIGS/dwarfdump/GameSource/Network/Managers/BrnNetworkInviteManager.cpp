// BrnNetworkInviteManager.cpp:56
void BrnNetwork::NetworkInviteManager::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkInviteManager.cpp:75
void BrnNetwork::NetworkInviteManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkInviteManager.cpp:94
void BrnNetwork::NetworkInviteManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkInviteManager.cpp:110
void BrnNetwork::NetworkInviteManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkInviteManager.cpp:442
void BrnNetwork::NetworkInviteManager::GetGameID(int32_t *  lpiGameID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkInviteManager.cpp:404
void BrnNetwork::NetworkInviteManager::IsInInvite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkInviteManager.cpp:419
void BrnNetwork::NetworkInviteManager::DownloadPlayersGameIDFromServer(const PlayerName *  lpPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkInviteManager.cpp:244
void BrnNetwork::NetworkInviteManager::UpdateGettingGameID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
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

// BrnNetworkInviteManager.cpp:381
void BrnNetwork::NetworkInviteManager::CompleteInvite(bool  lbSuccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkInviteManager.cpp:385
		InviteCompleteEvent lInviteCompleteEvent;

		BrnNetworkModule::GetGameEventQueue(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkInviteManager.cpp:366
void BrnNetwork::NetworkInviteManager::JoinGameComplete(bool  lbJoinedGame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkInviteManager.cpp:327
void BrnNetwork::NetworkInviteManager::LogInComplete(bool  lbLoggedIn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkInviteManager.cpp:125
void BrnNetwork::NetworkInviteManager::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkInviteManager.cpp:226
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkInviteManager.cpp:167
		BrnNetwork::BrnServerInterface * lpServerInterface;

		// BrnNetworkInviteManager.cpp:168
		int32_t liCurrentGameID;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkManager::GetServerInterface(/* parameters */);
	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkInviteManager.cpp:187
		NetworkOutInviteFailed lInviteFailedEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutInviteFailed>(/* parameters */);
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

// BrnNetworkInviteManager.cpp:300
void BrnNetwork::NetworkInviteManager::StartInviteOrJoin(InviteOrJoinParams  lInviteOrJoinParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkInviteManager.cpp:304
		NetworkOutInviteFailed lInviteFailedEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutInviteFailed>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

