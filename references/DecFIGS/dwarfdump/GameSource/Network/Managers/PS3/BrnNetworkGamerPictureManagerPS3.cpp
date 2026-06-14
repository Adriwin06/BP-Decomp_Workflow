// BrnNetworkGamerPictureManagerPS3.cpp:664
void BrnNetwork::GamerPictureManagerPS3::ResetGamerPictureData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:666
		int liPlayerIndex;

	}
}

// BrnNetworkGamerPictureManagerPS3.cpp:46
void BrnNetwork::GamerPictureManagerPS3::Construct(BrnNetwork::BrnNetworkManager *  lpNetworkManager, CgsNetwork::NetworkTextureDXTCompress *  lpTextureCompressor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:50
		int32_t liPlayerIndex;

	}
}

// BrnNetworkGamerPictureManagerPS3.cpp:642
void BrnNetwork::GamerPictureManagerPS3::PrepareGamerPictureTextures(HeapMalloc *  lpHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:644
		int32_t liPlayerIndex;

	}
}

// BrnNetworkGamerPictureManagerPS3.cpp:91
void BrnNetwork::GamerPictureManagerPS3::Prepare(HeapMalloc *  lpHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkGamerPictureManagerPS3.cpp:122
void BrnNetwork::GamerPictureManagerPS3::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkGamerPictureManagerPS3.cpp:147
void BrnNetwork::GamerPictureManagerPS3::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkGamerPictureManagerPS3.cpp:486
void BrnNetwork::GamerPictureManagerPS3::GetGamerPictureDataEntry(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:488
		BrnNetwork::GamerPictureManagerPS3::GamerPictureData * lpEntry;

	}
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:499
		int32_t liIndex;

	}
}

// BrnNetworkGamerPictureManagerPS3.cpp:524
void BrnNetwork::GamerPictureManagerPS3::GetGamerPictureDataEntry(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:526
		const BrnNetwork::GamerPictureManagerPS3::GamerPictureData * lpEntry;

	}
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:537
		int32_t liIndex;

	}
}

// BrnNetworkGamerPictureManagerPS3.cpp:566
void BrnNetwork::GamerPictureManagerPS3::GetGamerPictureTexture(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:568
		const BrnNetwork::GamerPictureManagerPS3::GamerPictureData * lpEntry;

		// BrnNetworkGamerPictureManagerPS3.cpp:569
		const NetworkTexture * lpTexture;

	}
}

// BrnNetworkGamerPictureManagerPS3.cpp:603
void BrnNetwork::GamerPictureManagerPS3::GetCompressedGamerPictureTexture(AggressiveMoveData::NetworkPlayerID  lPlayerID, NetworkTexture *  lpDstTexture, NetworkTextureDXTCompress::CompressionCompleteCallback  lCompressionCompleteCallback, void *  lpCallbackData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:605
		const BrnNetwork::GamerPictureManagerPS3::GamerPictureData * lpEntry;

		// BrnNetworkGamerPictureManagerPS3.cpp:606
		const NetworkTexture * lpTexture;

	}
	CgsNetwork::NetworkTexture::GetTextureSize(/* parameters */);
	CgsNetwork::NetworkTexture::GetTexture(/* parameters */);
}

// BrnNetworkGamerPictureManagerPS3.cpp:807
void BrnNetwork::GamerPictureManagerPS3::DownloadLocalGamerPicOnNPConnect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkGamerPictureManagerPS3.cpp:692
void BrnNetwork::GamerPictureManagerPS3::DownloadNextGamerPicture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:694
		int32_t liPlayerIndex;

		// BrnNetworkGamerPictureManagerPS3.cpp:695
		BrnNetwork::GamerPictureManagerPS3::GamerPictureData * lpDataEntry;

	}
}

// BrnNetworkGamerPictureManagerPS3.cpp:416
void BrnNetwork::GamerPictureManagerPS3::RemovePlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:418
		BrnNetwork::GamerPictureManagerPS3::GamerPictureData * lpEntry;

	}
}

// BrnNetworkGamerPictureManagerPS3.cpp:446
void BrnNetwork::GamerPictureManagerPS3::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:448
		int32_t liPlayerIndex;

	}
}

// BrnNetworkGamerPictureManagerPS3.cpp:354
void BrnNetwork::GamerPictureManagerPS3::AddPlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:356
		BrnNetwork::GamerPictureManagerPS3::GamerPictureData * lpDataEntry;

		// BrnNetworkGamerPictureManagerPS3.cpp:357
		bool lbLocalPlayer;

	}
}

// BrnNetworkGamerPictureManagerPS3.cpp:743
void BrnNetwork::GamerPictureManagerPS3::DownloadNextUserInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:745
		int32_t liRetVal;

		// BrnNetworkGamerPictureManagerPS3.cpp:746
		int32_t liPlayerIndex;

		// BrnNetworkGamerPictureManagerPS3.cpp:747
		CgsNetwork::NetworkPlayer * lpPlayer;

	}
	CgsNetwork::NetworkPlayer::GetName(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkGamerPictureManagerPS3.cpp:175
void BrnNetwork::GamerPictureManagerPS3::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:177
		int32_t liPlayerIndex;

		// BrnNetworkGamerPictureManagerPS3.cpp:178
		bool lbConnectedToNP;

	}
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:227
		int32_t liResult;

	}
	{
		// BrnNetworkGamerPictureManagerPS3.cpp:299
		int32_t liResult;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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

// BrnNetworkGamerPictureManagerPS3.cpp:26
// BrnNetworkGamerPictureManagerPS3.cpp:27
