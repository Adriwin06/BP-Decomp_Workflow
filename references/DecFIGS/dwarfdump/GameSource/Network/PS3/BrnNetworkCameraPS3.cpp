// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkCameraPS3.cpp:30
	const float32_t KF_NO_DATA_RECEIVED_TIMEOUT;

}

// BrnNetworkCameraPS3.cpp:1216
void BrnNetwork::CameraPS3::GetLocalCameraStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkCameraPS3.cpp:599
void BrnNetwork::CameraPS3::GetCompressedLocalCameraPicture(NetworkTexture *  lpDstTexture, int32_t  liQuality, NetworkTextureDXTCompress::CompressionCompleteCallback  lCompressionCompleteCallback, void *  lpCallbackData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::NetworkTexture::GetTextureSize(/* parameters */);
	CgsNetwork::NetworkTexture::GetHeight(/* parameters */);
	CgsNetwork::NetworkTexture::GetWidth(/* parameters */);
	CgsNetwork::NetworkTexture::GetTexture(/* parameters */);
}

// BrnNetworkCameraPS3.cpp:913
void BrnNetwork::CameraPS3::GetMachineEntry(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:915
		int32_t liPlayerIndex;

	}
}

// BrnNetworkCameraPS3.cpp:1137
void BrnNetwork::CameraPS3::UnregisterPlayer(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:1139
		BrnNetwork::CameraPS3::Machine * lpMachine;

	}
}

// BrnNetworkCameraPS3.cpp:876
void BrnNetwork::CameraPS3::ResetRemotePlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:878
		int32_t liMachineIndex;

	}
}

// BrnNetworkCameraPS3.cpp:1083
void BrnNetwork::CameraPS3::_RequestResponseMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, RoadRulesRecvData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:1085
		BrnNetwork::CameraPS3::Machine * lpMachine;

		// BrnNetworkCameraPS3.cpp:1086
		CameraPS3 * lpCamera;

		// BrnNetworkCameraPS3.cpp:1087
		BrnNetwork::CameraRequestResponseMessage * lpCameraRequestResponseMessage;

		// BrnNetworkCameraPS3.cpp:1088
		BrnNetwork::CameraRequestResponseMessage::EResponse leResponse;

	}
}

// BrnNetworkCameraPS3.cpp:1121
void BrnNetwork::CameraPS3::_RequestResponseMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, RoadRulesRecvData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkCameraPS3.cpp:1190
void BrnNetwork::CameraPS3::SetUserSetting(BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions  leCameraUserSetting) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkCameraPS3.cpp:1203
void BrnNetwork::CameraPS3::SetGameEnabled(bool  lbEnable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkCameraPS3.cpp:625
void BrnNetwork::CameraPS3::AddPlayer(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:627
		BrnNetwork::CameraPS3::Machine * lpMachine;

		// BrnNetworkCameraPS3.cpp:629
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
}

// BrnNetworkCameraPS3.cpp:315
void BrnNetwork::CameraPS3::UpdateCameraStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:317
		uint16_t lu16FrameCount;

		// BrnNetworkCameraPS3.cpp:318
		BrnNetwork::ECameraStatus leLocalCameraStatus;

		// BrnNetworkCameraPS3.cpp:319
		PlayerMenuData * lpMenuData;

		// BrnNetworkCameraPS3.cpp:320
		RoadRulesRecvData::NetworkPlayerID lLocalPlayerID;

	}
	{
		// BrnNetworkCameraPS3.cpp:328
		int32_t liPlayerIndex;

		// BrnNetworkCameraPS3.cpp:329
		BrnNetwork::ECameraStatus leCameraStatus;

		CgsNetwork::NetworkManager::GetPlayerManager(/* parameters */);
	}
}

// BrnNetworkCameraPS3.cpp:1001
void BrnNetwork::CameraPS3::_RequestMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, RoadRulesRecvData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:1003
		BrnNetwork::CameraPS3::Machine * lpMachine;

		// BrnNetworkCameraPS3.cpp:1004
		CameraPS3 * lpCamera;

		// BrnNetworkCameraPS3.cpp:1005
		BrnNetwork::CameraRequestMessage * lpCameraRequestMessage;

		// BrnNetworkCameraPS3.cpp:1006
		bool lbReleaseFeed;

	}
}

// BrnNetworkCameraPS3.cpp:368
void BrnNetwork::CameraPS3::GetRemoteCameraPictures() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:370
		bool lbProcessedPicture;

		// BrnNetworkCameraPS3.cpp:371
		int32_t liPlayerIndex;

	}
}

// BrnNetworkCameraPS3.cpp:1250
void _GLOBAL__D__ZN10BrnNetwork16BrnNetworkModule9ConstructEb() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkCameraPS3.cpp:1249
void _GLOBAL__I__ZN10BrnNetwork16BrnNetworkModule9ConstructEb() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkCameraPS3.cpp:157
void BrnNetwork::CameraPS3::PrepareTextures(HeapMalloc *  lpHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:159
		renderengine::Texture::Parameters lCameraPictureParams;

		// BrnNetworkCameraPS3.cpp:160
		ResourceDescriptor lGamerPictureDesc;

		// BrnNetworkCameraPS3.cpp:161
		ResourceDescriptor lCameraPictureDesc;

		// BrnNetworkCameraPS3.cpp:162
		Resource lResource;

		// BrnNetworkCameraPS3.cpp:163
		int32_t liPlayerIndex;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		CgsNetwork::NetworkTexture::SetIsUncompressedYUV(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
}

// BrnNetworkCameraPS3.cpp:406
void BrnNetwork::CameraPS3::GetLocalCameraPicture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:410
		CgsSystem::WebcamPS3::CameraPicture lCameraPic;

	}
	{
		// BrnNetworkCameraPS3.cpp:418
		int32_t liDstRow;

		// BrnNetworkCameraPS3.cpp:419
		int32_t liDstPixel;

		// BrnNetworkCameraPS3.cpp:420
		int32_t liStride;

		// BrnNetworkCameraPS3.cpp:421
		int32_t liWidth;

		// BrnNetworkCameraPS3.cpp:422
		int32_t liHeight;

		// BrnNetworkCameraPS3.cpp:423
		int32_t liSrcOffset;

		// BrnNetworkCameraPS3.cpp:424
		const int32_t * lpiSrcRowPointer;

		// BrnNetworkCameraPS3.cpp:425
		int32_t * lpiDstRowPointer;

		// BrnNetworkCameraPS3.cpp:426
		char * lpcTexture;

		CgsNetwork::NetworkTexture::GetFormat(/* parameters */);
		CgsNetwork::NetworkTexture::GetWidth(/* parameters */);
		CgsNetwork::NetworkTexture::GetHeight(/* parameters */);
		CgsNetwork::NetworkTexture::GetTexture(/* parameters */);
		CgsNetwork::NetworkTexture::SetIsUncompressedYUV(/* parameters */);
		{
			// BrnNetworkCameraPS3.cpp:526
			int32_t liSrcPixel;

		}
		{
			// BrnNetworkCameraPS3.cpp:438
			uint64_t lu64Increment;

			// BrnNetworkCameraPS3.cpp:439
			int32_t liSrcRow;

			// BrnNetworkCameraPS3.cpp:440
			int32_t liSrcColumn;

			// BrnNetworkCameraPS3.cpp:441
			uint64_t * lpu64DstRow;

			// BrnNetworkCameraPS3.cpp:442
			const uint64_t * lpu64SrcRow1;

			// BrnNetworkCameraPS3.cpp:443
			const uint64_t * lpu64SrcRow2;

			CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
			{
				// BrnNetworkCameraPS3.cpp:457
				uint64_t lu64Row1Pixels;

				// BrnNetworkCameraPS3.cpp:458
				uint64_t lu64Row2Pixels;

				// BrnNetworkCameraPS3.cpp:459
				uint64_t lu64Row1UV;

				// BrnNetworkCameraPS3.cpp:460
				uint64_t lu64Row2UV;

				// BrnNetworkCameraPS3.cpp:461
				uint64_t lu64UVRowSum;

				// BrnNetworkCameraPS3.cpp:462
				uint64_t lu64UVPixels;

				// BrnNetworkCameraPS3.cpp:463
				uint64_t lu64Row1Y;

				// BrnNetworkCameraPS3.cpp:464
				uint64_t lu64Row2Y;

				// BrnNetworkCameraPS3.cpp:465
				uint64_t lu64YRowSum;

				// BrnNetworkCameraPS3.cpp:466
				uint64_t lu64YPixels;

			}
			CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
		}
		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// BrnNetworkCameraPS3.cpp:1159
void BrnNetwork::CameraPS3::OnGameStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:1161
		BrnNetwork::CameraPS3::Machine * lpMachine;

		// BrnNetworkCameraPS3.cpp:1162
		int32_t liMachineIndex;

		CgsSystem::Time::SetFloatVal(/* parameters */);
	}
}

// BrnNetworkCameraPS3.cpp:218
void BrnNetwork::CameraPS3::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkCameraPS3.cpp:185
void BrnNetwork::CameraPS3::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkCameraPS3.cpp:117
void BrnNetwork::CameraPS3::Prepare(HeapMalloc *  lpHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::WebcamPS3::SetConvertYUVToARGB(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkCameraPS3.cpp:65
void BrnNetwork::CameraPS3::Construct(BrnNetwork::BrnNetworkManager *  lpNetworkManager, CgsNetwork::NetworkTextureDXTCompress *  lpTextureCompressor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:67
		int32_t liMachineIndex;

	}
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkCameraPS3.cpp:806
void BrnNetwork::CameraPS3::RequestFeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:808
		BrnNetwork::CameraPS3::Machine * lpMachine;

	}
	CgsSystem::Time::operator=(/* parameters */);
}

// BrnNetworkCameraPS3.cpp:706
void BrnNetwork::CameraPS3::RemovePlayer(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:708
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// BrnNetworkCameraPS3.cpp:709
		BrnNetwork::CameraPS3::Machine * lpMachine;

	}
	CgsSystem::Time::operator=(/* parameters */);
}

// BrnNetworkCameraPS3.cpp:249
void BrnNetwork::CameraPS3::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:251
		int32_t liPlayerIndex;

		CgsSystem::Time::SetFloatVal(/* parameters */);
	}
}

// BrnNetworkCameraPS3.cpp:273
void BrnNetwork::CameraPS3::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkManager::GetTime(/* parameters */);
	CgsSystem::Time::operator-(/* parameters */);
	CgsSystem::Time::operator>=(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkCameraPS3.cpp:680
void BrnNetwork::CameraPS3::PlayerFinalised(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:682
		PlayerParams lPlayerParams;

		// BrnNetworkCameraPS3.cpp:683
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// BrnNetworkCameraPS3.cpp:684
		BrnNetwork::CameraPS3::Machine * lpMachine;

	}
	PlayerParams::PlayerParams(/* parameters */);
	CgsNetwork::NetworkPlayer::GetConnectionData(/* parameters */);
	PlayerParams::~PlayerParams(/* parameters */);
}

// BrnNetworkCameraPS3.cpp:837
void BrnNetwork::CameraPS3::ReleaseFeed(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:839
		BrnNetwork::CameraPS3::Machine * lpMachine;

	}
	CgsSystem::Time::operator=(/* parameters */);
}

// BrnNetworkCameraPS3.cpp:757
void BrnNetwork::CameraPS3::RequestFeed(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:759
		BrnNetwork::CameraPS3::Machine * lpMachine;

	}
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	BrnNetworkManager::GetTime(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
}

// BrnNetworkCameraPS3.cpp:955
void BrnNetwork::CameraPS3::GetCameraPicture(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkCameraPS3.cpp:973
		BrnNetwork::CameraPS3::Machine * lpMachine;

	}
	BrnNetworkManager::GetTime(/* parameters */);
	CgsSystem::Time::operator-(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSystem::Time::operator<=(/* parameters */);
	BrnNetworkManager::GetTime(/* parameters */);
	CgsSystem::Time::operator-(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSystem::Time::operator<=(/* parameters */);
}

// BrnNetworkCameraPS3.cpp:939
void BrnNetwork::CameraPS3::GetRequestedCameraPicture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkCameraPS3.cpp:1064
void BrnNetwork::CameraPS3::_RequestMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, RoadRulesRecvData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[33] __FUNCTION__;

	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkCameraPS3.cpp:32
// BrnNetworkCameraPS3.cpp:34
// BrnNetworkCameraPS3.cpp:35
// BrnNetworkCameraPS3.cpp:37
// BrnNetworkCameraPS3.cpp:39
// BrnNetworkCameraPS3.cpp:41
