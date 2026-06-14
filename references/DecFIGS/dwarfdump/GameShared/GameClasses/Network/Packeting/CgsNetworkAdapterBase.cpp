// CgsNetworkAdapterBase.cpp:48
void CgsNetwork::NetworkAdapterBase::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkAdapterBase.cpp:82
void CgsNetwork::NetworkAdapterBase::Prepare(NetworkAdapterPrepareParams *  lpPrepareParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	NetworkAdapterPrepareParams::GetRecieveBufferAllocator(/* parameters */);
}

// CgsNetworkAdapterBase.cpp:112
void CgsNetwork::NetworkAdapterBase::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkAdapterBase.cpp:127
void CgsNetwork::NetworkAdapterBase::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkAdapterBase.cpp:153
void CgsNetwork::NetworkAdapterBase::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkAdapterBase.cpp:243
void CgsNetwork::NetworkAdapterBase::ReceiveFrom(void **  lppData, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData  lConnectionData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkAdapterBase.cpp:245
		int32_t liBytesRecvd;

		// netgamepkt.h:114
		typedef NetGameMaxPacketT NetGameMaxPacketT;

		// CgsNetworkAdapterBase.cpp:246
		NetGameMaxPacketT * lpPacket;

	}
}

// CgsNetworkAdapterBase.cpp:179
void CgsNetwork::NetworkAdapterBase::SendTo(void *  lpData, int32_t  liLength, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData  lConnectionData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkAdapterBase.cpp:181
		NetGameMaxPacketT lPacket;

		// CgsNetworkAdapterBase.cpp:182
		int32_t liRC;

	}
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsNetworkAdapterBase.cpp:213
		char[17] lacIPAddress;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsNetworkAdapterBase.cpp:31
