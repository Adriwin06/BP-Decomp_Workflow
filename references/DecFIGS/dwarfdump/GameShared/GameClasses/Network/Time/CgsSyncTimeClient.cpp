// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsSyncTimeClient.cpp:47
	const uint16_t KU16_SYNC_SEND_FRAME_TIMEOUT = 6;

	// CgsSyncTimeClient.cpp:48
	const int32_t KI_HOST_UNAVAILABLE_TIMEOUT = 600;

}

// CgsSyncTimeClient.cpp:68
void CgsNetwork::SyncTimeClient::Construct(CgsNetwork::PlayerManager *  lpPlayerManager, SyncTimeMessageManager *  lpMessageManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSyncTimeClient.cpp:303
void CgsNetwork::SyncTimeClient::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSyncTimeClient.cpp:324
void CgsNetwork::SyncTimeClient::TimeIsSynchronised(Time &  lTimeDiffTolerance, int32_t  liMinNumPacketsRecvd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSyncTimeClient.cpp:326
		uint8_t lu8Index;

		// CgsSyncTimeClient.cpp:327
		float_t lfAverageTimeDiff;

	}
	rw::math::fpu::Abs<float>(/* parameters */);
}

// CgsSyncTimeClient.cpp:91
void CgsNetwork::SyncTimeClient::Prepare(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lHostPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[8] __FUNCTION__;

	{
		// CgsSyncTimeClient.cpp:93
		int32_t liIndex;

		// CgsSyncTimeClient.cpp:99
		CgsNetwork::NetworkPlayer * lpHostPlayer;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsSyncTimeClient.cpp:101
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsSyncTimeClient.cpp:140
void CgsNetwork::SyncTimeClient::Update(uint16_t  lu16FrameNum, Time *  lpNetworkTime, const Time *  lpGlobalTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSyncTimeClient.cpp:142
		CgsNetwork::SyncTimeMessage * lpMessage;

		// CgsSyncTimeClient.cpp:143
		uint8_t lu8Index;

		// CgsSyncTimeClient.cpp:144
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lClientPlayerID;

		// CgsSyncTimeClient.cpp:145
		float_t lfAverageDelay;

		PlayerManager::GetNextLocalPlayerID(/* parameters */);
	}
	{
		// CgsSyncTimeClient.cpp:156
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lMessageHostPlayerID;

		// CgsSyncTimeClient.cpp:157
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lMessageClietPlayerID;

		// CgsSyncTimeClient.cpp:158
		Time lMessageHostTime;

		// CgsSyncTimeClient.cpp:159
		Time lMessageClientTime;

		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
	}
	GetFrameDiffWrapped16(/* parameters */);
	CgsSystem::Time::GetFloatVal(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSystem::Time::operator-(/* parameters */);
	CgsSystem::Time::operator>=(/* parameters */);
	{
		// CgsSyncTimeClient.cpp:167
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsSystem::Time::GetFloatVal(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsSystem::Time::GetFloatVal(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSystem::Time::operator-(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator+(/* parameters */);
	CgsSystem::Time::operator-(/* parameters */);
	CgsSystem::Time::operator>=(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
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

// CgsSyncTimeClient.cpp:278
void CgsNetwork::SyncTimeClient::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSyncTimeClient.cpp:283
		CgsNetwork::NetworkPlayer * lpHostPlayer;

	}
	{
		// CgsSyncTimeClient.cpp:285
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

