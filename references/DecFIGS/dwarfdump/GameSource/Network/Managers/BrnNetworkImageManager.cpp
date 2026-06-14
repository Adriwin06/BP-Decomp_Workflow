// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkImageManager.cpp:36
	const bool[5] KAB_IMAGE_TRANSMITS_GAMERPIC;

	// BrnNetworkImageManager.cpp:45
	const int32_t KI_MAX_BUFFERED_RELIABLE_MESSAGES_TO_SEND_MUGSHOT = 21;

}

// BrnNetworkImageManager.cpp:2085
void BrnNetwork::NetworkImageManager::EnableMugshotOutput(bool  lbOutputEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkImageManager.cpp:1282
void BrnNetwork::NetworkImageManager::GetMugshotDataEntry(AggressiveMoveData::NetworkPlayerID  lAggressorPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1284
		BrnNetwork::NetworkImageManager::MugshotData * lpEntry;

		// BrnNetworkImageManager.cpp:1285
		int32_t liIndex;

	}
}

// BrnNetworkImageManager.cpp:1946
void BrnNetwork::NetworkImageManager::GetMugshotVictimID(AggressiveMoveData::NetworkPlayerID  lTakedownAggressorID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1948
		BrnNetwork::NetworkImageManager::MugshotData * lpMugshotDataEntry;

	}
}

// BrnNetworkImageManager.cpp:1820
void BrnNetwork::NetworkImageManager::GetMugshotImageByAggressor(AggressiveMoveData::NetworkPlayerID  lTakedownAggressorID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1822
		BrnNetwork::NetworkImageManager::MugshotData * lpMugshotDataEntry;

	}
}

// BrnNetworkImageManager.cpp:1988
void BrnNetwork::NetworkImageManager::HandlePlayerStoppedMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1990
		int32_t liPlayerIndex;

	}
}

// BrnNetworkImageManager.cpp:75
void BrnNetwork::NetworkImageManager::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule, CgsNetwork::PlayerManager *  lpPlayerManager, CgsNetwork::TimeManager *  lpTimeManager, CgsNetwork::NetworkTextureDXTCompress *  lpTextureCompressor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:77
		int32_t liIndex;

	}
}

// BrnNetworkImageManager.cpp:767
void BrnNetwork::NetworkImageManager::HandleAbortingMugshotCapture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkImageManager.cpp:997
void BrnNetwork::NetworkImageManager::GetImageDataToSend() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:999
		int32_t liIndex;

	}
}

// BrnNetworkImageManager.cpp:2434
void BrnNetwork::NetworkImageManager::IsThereEnoughBandwidthToSend() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkImageManager.cpp:1250
void BrnNetwork::NetworkImageManager::GetImageMessageDataEntry(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1252
		BrnNetwork::NetworkImageManager::ImageMessageData * lpEntry;

		// BrnNetworkImageManager.cpp:1253
		int32_t liIndex;

	}
}

// BrnNetworkImageManager.cpp:1152
void BrnNetwork::NetworkImageManager::AddPlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1154
		BrnNetwork::NetworkImageManager::ImageMessageData * lpDataEntry;

		// BrnNetworkImageManager.cpp:1155
		BrnNetwork::NetworkImageManager::MugshotData * lpMugshotDataEntry;

		// BrnNetworkImageManager.cpp:1156
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
}

// BrnNetworkImageManager.cpp:1201
void BrnNetwork::NetworkImageManager::RemovePlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1203
		BrnNetwork::NetworkImageManager::ImageMessageData * lpEntry;

		// BrnNetworkImageManager.cpp:1204
		BrnNetwork::NetworkImageManager::MugshotData * lpMugshotDataEntry;

		// BrnNetworkImageManager.cpp:1205
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
}

// BrnNetworkImageManager.cpp:1310
void BrnNetwork::NetworkImageManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1312
		int32_t liIndex;

	}
}

// BrnNetworkImageManager.cpp:1964
void BrnNetwork::NetworkImageManager::OnRoundStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1967
		int32_t liIndex;

	}
}

// BrnNetworkImageManager.cpp:902
void BrnNetwork::NetworkImageManager::SendNextSegment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:904
		char[500] lacBuffer;

		// BrnNetworkImageManager.cpp:905
		AggressiveMoveData::NetworkPlayerID lRemotePlayerID;

		// BrnNetworkImageManager.cpp:906
		int32_t liBytesSent;

		// BrnNetworkImageManager.cpp:907
		int32_t liBytesToWrite;

		// BrnNetworkImageManager.cpp:908
		BrnNetwork::ImageMessage * lpImageMessage;

		// BrnNetworkImageManager.cpp:909
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// BrnNetworkImageManager.cpp:910
		char * lpcReadPosition;

		// BrnNetworkImageManager.cpp:911
		BrnNetwork::NetworkImageManager::MugshotData * lpRemoteMugshotData;

		// BrnNetworkImageManager.cpp:912
		BrnNetwork::NetworkImageManager::MugshotData * lpAggressorMugshotData;

		CgsNetwork::PlayerManager::IsLocalPlayer(/* parameters */);
		rw::core::stdc::Min(/* parameters */);
		CgsCore::MemCpy(/* parameters */);
	}
}

// BrnNetworkImageManager.cpp:131
void BrnNetwork::NetworkImageManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:137
		int32_t liIndex;

	}
}

// BrnNetworkImageManager.cpp:187
void BrnNetwork::NetworkImageManager::Prepare(HeapMalloc *  lpHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:189
		int32_t liIndex;

	}
}

// BrnNetworkImageManager.cpp:230
void BrnNetwork::NetworkImageManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:232
		int32_t liIndex;

	}
}

// BrnNetworkImageManager.cpp:1769
void BrnNetwork::NetworkImageManager::GetCompressedTexture(NetworkTexture *  lpCompressedTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1771
		BrnNetworkManager::Camera * lpCamera;

		// BrnNetworkImageManager.cpp:1786
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkImageManager.cpp:1787
		const NetworkTexture * lpTexture;

	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkManager::GetCamera(/* parameters */);
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
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

// BrnNetworkImageManager.cpp:1607
void BrnNetwork::NetworkImageManager::HandleShowingMugshot(bool  lbShowMyMugshot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1609
		AggressiveMoveData::NetworkPlayerID lMugshotDataPlayerID;

		// BrnNetworkImageManager.cpp:1610
		BrnNetwork::NetworkImageManager::MugshotData * lpMugshotData;

		// BrnNetworkImageManager.cpp:1611
		BrnNetwork::BrnNetworkManager * lpNetworkManager;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
		{
			// BrnNetworkImageManager.cpp:1668
			AggressiveMoveData::NetworkPlayerID lDisplayPictureID;

			// BrnNetworkImageManager.cpp:1669
			const NetworkTexture * lpGamerPicture;

			CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		}
	}
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkImageManager.cpp:1530
void BrnNetwork::NetworkImageManager::CheckMugshotPrivileges() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1532
		BrnNetwork::NetworkImageManager::EMugshotPrivilege leMugshotPrivilege;

		{
			// BrnNetworkImageManager.cpp:1578
			BrnNetworkManager::Camera * lpCamera;

		}
	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkManager::GetCamera(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkImageManager.cpp:2182
void BrnNetwork::NetworkImageManager::GetUniqueIDByPlayerID(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID, LiveRevengeRelationship::UniquePlayerID *  lpUniqueID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:2184
		PlayerParams lPlayerParams;

		// BrnNetworkImageManager.cpp:2185
		BrnNetwork::BrnNetworkManager * lpNetworkManager;

		// BrnNetworkImageManager.cpp:2186
		BrnNetwork::BrnServerInterface * lpServerInterface;

		PlayerParams::PlayerParams(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkManager::GetServerInterface(/* parameters */);
		CgsNetwork::UniquePlayerIDPS3::Construct(/* parameters */);
		PlayerParams::~PlayerParams(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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

// BrnNetworkImageManager.cpp:608
void BrnNetwork::NetworkImageManager::HandleMugshotEvent(const NetworkInPaybackMugshotEvent *  lpMugshotEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	{
		// BrnNetworkImageManager.cpp:752
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkImageManager.cpp:730
		int32_t liPlayerIndex;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
	}
	{
		// BrnNetworkImageManager.cpp:698
		int32_t liPlayerIndex;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
	}
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	{
		// BrnNetworkImageManager.cpp:624
		BrnNetwork::NetworkImageManager::MugshotData * lpMugshotData;

		BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
		BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
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

// BrnNetworkImageManager.cpp:857
void BrnNetwork::NetworkImageManager::ProcessDirtyTrickEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:859
		int32_t liIndex;

		// BrnNetworkImageManager.cpp:860
		DirtyTrickEvent lDirtyTrickEvent;

		// BrnNetworkImageManager.cpp:861
		const GameStateToNetworkInterface::DirtyTrickQueue * lpDirtyTrickEventQueue;

	}
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetEvent(/* parameters */);
	{
		// BrnNetworkImageManager.cpp:873
		BrnNetwork::NetworkImageManager::MugshotData * lpMugshotData;

		BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	}
	BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkImageManager.cpp:1742
void BrnNetwork::NetworkImageManager::_ImageMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, AggressiveMoveData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[31] __FUNCTION__;

	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkImageManager.cpp:1851
void BrnNetwork::NetworkImageManager::GetPhotoFinishImageByRoundWinner(AggressiveMoveData::NetworkPlayerID  lRoundWinnerID, bool *  lpbAlreadyShowingPhotoFinish) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1853
		BrnNetwork::NetworkImageManager::MugshotData * lpMugshotDataEntry;

	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkImageManager.cpp:1865
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkImageManager.cpp:2339
void BrnNetwork::NetworkImageManager::AreMugshotsDisabledForPlayer(AggressiveMoveData::NetworkPlayerID  lRemotePlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:2341
		bool lbDisabled;

		// BrnNetworkImageManager.cpp:2358
		int liRestricted;

		// BrnNetworkImageManager.cpp:2367
		PlayerName lPlayerName;

		// BrnNetworkImageManager.cpp:2368
		CgsNetwork::PlayerMenuData * lpPlayerMenuData;

		// BrnNetworkImageManager.cpp:2369
		BrnNetworkManager::BuddyManager * lpBuddyManager;

		// BrnNetworkImageManager.cpp:2388
		BrnNetwork::NetworkImageManager::EMugshotPrivilege leMugshotPrivilege;

	}
	CgsNetwork::PlayerName::Construct(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkManager::GetBuddyManager(/* parameters */);
	{
		// BrnNetworkImageManager.cpp:2418
		CgsDev::StrStream lStrStream;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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

// BrnNetworkImageManager.cpp:1495
void BrnNetwork::NetworkImageManager::HandleReceivedCameraPic(AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, BrnNetwork::NetworkImageManager::MugshotData *  lpMugshotData, BrnGameState::GameStateModuleIO::EImageType  leReceivedImageType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkImageManager.cpp:1103
void BrnNetwork::NetworkImageManager::BroadcastImage(BrnNetwork::NetworkImageManager::MugshotData *  lpMugshotData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1105
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkImageManager.cpp:1106
		int32_t liIndex;

	}
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
}

// BrnNetworkImageManager.cpp:2147
void BrnNetwork::NetworkImageManager::RequestMugshotSave(BrnNetwork::NetworkImageManager::MugshotData *  lpLocalMugshotData, AggressiveMoveData::NetworkPlayerID  lImageSenderPlayerID, BrnGameState::GameStateModuleIO::EImageType  leMugshotType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:2149
		NetworkOutMugshotToSaveEvent lMugshotToSaveEvent;

	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutMugshotToSaveEvent>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkImageManager.cpp:2297
void BrnNetwork::NetworkImageManager::_GetCompressedGamerPicCallback(void *  lpPixels, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:2299
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkImageManager.cpp:2300
		BrnNetwork::NetworkImageManager::MugshotData * lpMugshotData;

		// BrnNetworkImageManager.cpp:2301
		NetworkImageManager * lpImageManager;

		// BrnNetworkImageManager.cpp:2302
		CgsNetwork::PlayerManager * lpPlayerManager;

	}
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

// BrnNetworkImageManager.cpp:2012
void BrnNetwork::NetworkImageManager::HandleRoundResults(const OnlineRoundResults *  lpRoundResults) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:2014
		AggressiveMoveData::NetworkPlayerID lRoundWinnerID;

	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnGameState::GameStateModuleIO::OnlineRoundResults::GetWinner(/* parameters */);
	{
		// BrnNetworkImageManager.cpp:2028
		BrnNetwork::NetworkImageManager::MugshotData * lpMugshotDataEntry;

		{
			// BrnNetworkImageManager.cpp:2037
			AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

			// BrnNetworkImageManager.cpp:2038
			BrnNetwork::NetworkImageManager::MugshotData * lpLocalMugshotData;

			// BrnNetworkImageManager.cpp:2039
			BrnNetworkManager::GamerPictureManager * lpGamerPicManager;

			BrnNetworkModule::GetNetworkManager(/* parameters */);
			BrnNetworkModule::GetNetworkManager(/* parameters */);
			BrnNetworkManager::GetGamerPictureManager(/* parameters */);
			CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		}
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

// BrnNetworkImageManager.cpp:2107
void BrnNetwork::NetworkImageManager::OutputMugshotData(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:2109
		NetworkOutPostEventScalps lMugshotDataEvent;

		// BrnNetworkImageManager.cpp:2110
		int32_t liIndex;

	}
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	BrnNetworkModuleIO::OutputBuffer::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutPostEventScalps>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkImageManager.cpp:1026
void BrnNetwork::NetworkImageManager::SendMugshotPicture(AggressiveMoveData::NetworkPlayerID  lRemotePlayerID, AggressiveMoveData::NetworkPlayerID  lTakedownAggressorPlayerID, AggressiveMoveData::NetworkPlayerID  lTakedownVictimPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1029
		uint16_t lu16CurrentFrame;

		// BrnNetworkImageManager.cpp:1030
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// BrnNetworkImageManager.cpp:1031
		BrnNetwork::ImageMessage * lpImageMessage;

		// BrnNetworkImageManager.cpp:1032
		BrnNetwork::NetworkImageManager::MugshotData * lpAggressorMugshotData;

		// BrnNetworkImageManager.cpp:1033
		BrnNetwork::NetworkImageManager::MugshotData * lpRemoteMugshotData;

	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	{
		// BrnNetworkImageManager.cpp:1065
		NetworkOutSentMugshot lMugshotSentEvent;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutSentMugshot>(/* parameters */);
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

// BrnNetworkImageManager.cpp:2210
void BrnNetwork::NetworkImageManager::_GetCompressedCameraPicCallback(void *  lpPixels, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:2212
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkImageManager.cpp:2213
		AggressiveMoveData::NetworkPlayerID lTakedownAggressorPlayerID;

		// BrnNetworkImageManager.cpp:2214
		BrnNetwork::NetworkImageManager::MugshotData * lpMugshotData;

		// BrnNetworkImageManager.cpp:2215
		NetworkImageManager * lpImageManager;

		// BrnNetworkImageManager.cpp:2216
		CgsNetwork::PlayerManager * lpPlayerManager;

	}
	CgsCore::MemCpy(/* parameters */);
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
}

// BrnNetworkImageManager.cpp:271
void BrnNetwork::NetworkImageManager::ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:339
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkImageManager.cpp:340
		BrnNetworkManager::Camera * lpCamera;

		// BrnNetworkImageManager.cpp:341
		BrnNetworkManager::GamerPictureManager * lpGamerPicManager;

		// BrnNetworkImageManager.cpp:365
		const NetworkTexture * lpTexture;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkManager::GetCamera(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkManager::GetGamerPictureManager(/* parameters */);
		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		{
			// BrnNetworkImageManager.cpp:369
			BrnNetwork::NetworkImageManager::MugshotData * lpMugshotData;

		}
	}
	{
		// BrnNetworkImageManager.cpp:281
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkImageManager.cpp:282
		BrnNetworkManager::Camera * lpCamera;

		// BrnNetworkImageManager.cpp:283
		BrnNetworkManager::GamerPictureManager * lpGamerPicManager;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkManager::GetCamera(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkManager::GetGamerPictureManager(/* parameters */);
		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		{
			// BrnNetworkImageManager.cpp:305
			const NetworkTexture * lpTexture;

		}
	}
	{
		// BrnNetworkImageManager.cpp:428
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkImageManager.cpp:429
		BrnNetworkManager::Camera * lpCamera;

		// BrnNetworkImageManager.cpp:447
		const NetworkTexture * lpTexture;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkManager::GetCamera(/* parameters */);
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkImageManager.cpp:819
void BrnNetwork::NetworkImageManager::AbortMugshotShow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:821
		int32_t liPlayerIndex;

		// BrnNetworkImageManager.cpp:822
		NetworkOutAbortImageCaptureEvent lAbortCaptureEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutAbortImageCaptureEvent>(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
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

// BrnNetworkImageManager.cpp:781
void BrnNetwork::NetworkImageManager::AbortMugshotCapture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:783
		NetworkOutAbortImageCaptureEvent lAbortCaptureEvent;

		// BrnNetworkImageManager.cpp:784
		int32_t liPlayerIndex;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutAbortImageCaptureEvent>(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
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

// BrnNetworkImageManager.cpp:1342
void BrnNetwork::NetworkImageManager::ReceiveImageMessage(AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, BrnNetwork::ImageMessage *  lpImageMessageRecv) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1344
		char[500] lacPhotoBuffer;

		// BrnNetworkImageManager.cpp:1345
		EActiveRaceCarIndex lePaybackAggressorRaceCarIndex;

		// BrnNetworkImageManager.cpp:1346
		EActiveRaceCarIndex lePaybackVictimRaceCarIndex;

		// BrnNetworkImageManager.cpp:1347
		BrnGameState::GameStateModuleIO::EImageType leReceivedImageType;

		// BrnNetworkImageManager.cpp:1348
		int32_t liBytesPositionFromStartOfPhoto;

		// BrnNetworkImageManager.cpp:1349
		CgsID lRoadRuleBeatenID;

		// BrnNetworkImageManager.cpp:1350
		uint16_t lu16PhotoPacketNumber;

		// BrnNetworkImageManager.cpp:1351
		uint16_t lu16TotalNumberOfPhotoPackets;

		// BrnNetworkImageManager.cpp:1352
		uint16_t lu16PhotoBytes;

		// BrnNetworkImageManager.cpp:1353
		AggressiveMoveData::NetworkPlayerID lTakedownVictimPlayerID;

		// BrnNetworkImageManager.cpp:1354
		AggressiveMoveData::NetworkPlayerID lTakedownAggressorPlayerID;

		// BrnNetworkImageManager.cpp:1355
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkImageManager.cpp:1356
		BrnNetwork::NetworkImageManager::MugshotData * lpMugshotData;

		// BrnNetworkImageManager.cpp:1357
		char * lpcWritePosition;

	}
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	{
		// BrnNetworkImageManager.cpp:1467
		NetworkOutImageReceivedEvent lImageReceivedEvent;

		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutImageReceivedEvent>(/* parameters */);
	}
	CgsCore::MemCpy(/* parameters */);
	CgsContainers::BitArray<50u>::SetBit(/* parameters */);
	CgsContainers::BitArray<50u>::GetFirstZeroBit(/* parameters */);
	{
		// BrnNetworkImageManager.cpp:1451
		NetworkOutCapturingTheirImageEvent lCapturingImageEvent;

		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutCapturingTheirImageEvent>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkImageManager.cpp:1409
		NetworkOutImageReceivedEvent lImageReceivedEvent;

		// BrnNetworkImageManager.cpp:1410
		BrnNetwork::BrnServerInterface * lpServerInterface;

		CgsContainers::BitArray<50u>::UnSetAll(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutImageReceivedEvent>(/* parameters */);
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

// BrnNetworkImageManager.cpp:1713
void BrnNetwork::NetworkImageManager::_ImageMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:1715
		NetworkImageManager * lpImageManager;

		// BrnNetworkImageManager.cpp:1716
		BrnNetwork::ImageMessage * lpImageMessage;

	}
}

// BrnNetworkImageManager.cpp:553
void BrnNetwork::NetworkImageManager::ProcessNetworkEvents(const NetworkEventQueue *  lpInputNetworkEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkImageManager.cpp:555
		const CgsModule::Event * lpEvent;

		// BrnNetworkImageManager.cpp:556
		int32_t liEventSize;

		// BrnNetworkImageManager.cpp:557
		int32_t liEventType;

		CgsModule::VariableEventQueue<14000,16>::GetFirstEvent(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkImageManager.cpp:496
void BrnNetwork::NetworkImageManager::ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModuleIO::PostSimulationInputBuffer::GetNetworkEventQueue(/* parameters */);
	{
		// BrnNetworkImageManager.cpp:503
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		{
			// BrnNetworkImageManager.cpp:512
			BrnNetwork::NetworkImageManager::MugshotData * lpMugshotData;

			CgsContainers::BitArray<50u>::UnSetAll(/* parameters */);
		}
	}
}

