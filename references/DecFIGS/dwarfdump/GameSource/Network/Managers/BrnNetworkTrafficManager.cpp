// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkTrafficManager.cpp:39
	const uint16_t KU16_TRAFFIC_RESTART_DELAY = 5;

	// BrnNetworkTrafficManager.cpp:40
	const uint16_t KU16_TRAFFIC_RESTART_IGNORE_ERROR_TIME = 5;

	// BrnNetworkTrafficManager.cpp:41
	const uint16_t KU16_NUM_FRAMES_SINCE_RESET_TO_DITCH_MESSAGES = 2000;

	// BrnNetworkTrafficManager.cpp:45
	const RGBA KU_TRAFFIC_DIVERGED_TEXT_COLOUR;

	// BrnNetworkTrafficManager.cpp:46
	const float32_t KF_TRAFFIC_DIVERGED_TEXT_SIZE;

	// BrnNetworkTrafficManager.cpp:47
	const char[19] KAC_TRAFFIC_DIVERGED_TEXT;

	// BrnNetworkTrafficManager.cpp:48
	const float32_t KF_TRAFFIC_DIVERGED_TEXT_POS_X;

	// BrnNetworkTrafficManager.cpp:49
	const float32_t KF_TRAFFIC_DIVERGED_TEXT_POS_Y;

	// BrnNetworkTrafficManager.cpp:50
	const rw::math::vpu::Vector2 K_TRAFFIC_DIVERGED_TEXT_POS;

	// BrnNetworkTrafficManager.cpp:52
	const RGBA KU_TRAFFIC_IN_PAST_TEXT_COLOUR;

	// BrnNetworkTrafficManager.cpp:53
	const float32_t KF_TRAFFIC_IN_PAST_TEXT_SIZE;

	// BrnNetworkTrafficManager.cpp:54
	const char[35] KAC_TRAFFIC_IN_PAST_TEXT;

	// BrnNetworkTrafficManager.cpp:55
	const float32_t KF_TRAFFIC_IN_PAST_TEXT_POS_X;

	// BrnNetworkTrafficManager.cpp:56
	const float32_t KF_TRAFFIC_IN_PAST_TEXT_POS_Y;

	// BrnNetworkTrafficManager.cpp:57
	const rw::math::vpu::Vector2 K_TRAFFIC_IN_PAST_TEXT_POS;

	// BrnNetworkTrafficManager.cpp:59
	const RGBA KU_TRAFFIC_RESTART_PENDING_TEXT_COLOUR;

	// BrnNetworkTrafficManager.cpp:60
	const float32_t KF_TRAFFIC_RESTART_PENDING_TEXT_SIZE;

	// BrnNetworkTrafficManager.cpp:61
	const char[42] KAC_TRAFFIC_RESTART_PENDING_TEXT;

	// BrnNetworkTrafficManager.cpp:62
	const float32_t KF_TRAFFIC_RESTART_PENDING_TEXT_POS_X;

	// BrnNetworkTrafficManager.cpp:63
	const float32_t KF_TRAFFIC_RESTART_PENDING_TEXT_POS_Y;

	// BrnNetworkTrafficManager.cpp:64
	const rw::math::vpu::Vector2 K_TRAFFIC_RESTART_PENDING_TEXT_POS;

}

// BrnNetworkTrafficManager.cpp:234
void BrnNetwork::TrafficManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkTrafficManager.cpp:1886
void BrnNetwork::TrafficManager::IsTrafficSystemResetPending() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkTrafficManager.cpp:714
void BrnNetwork::TrafficManager::RegisterMessages(CgsNetwork::NetworkPlayer *  lpNetworkPlayer, BrnNetwork::TrafficManager::TrafficSyncData *  lpDataEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkTrafficManager.cpp:687
void BrnNetwork::TrafficManager::GetIndexOfPlayerInTrafficData(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:689
		int32_t liTrafficDataIndex;

	}
}

// BrnNetworkTrafficManager.cpp:636
void BrnNetwork::TrafficManager::RestartNetworkTrafficForHost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkTrafficManager.cpp:1734
void BrnNetwork::TrafficManager::ConvertReceivedMessageFrameToLocalFrame(uint16_t  lu16FrameToGetMessage, CgsSystem::EFrameRate  leLocalConsoleFrameRate, CgsSystem::EFrameRate  leRemoteConsoleFrameRate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:1736
		uint16_t lu16MessageFrameToCompare;

	}
}

// BrnNetworkTrafficManager.cpp:1788
void BrnNetwork::TrafficManager::ConvertLocalFrameToReceivedMessageFrame(uint16_t  lu16LocalFrame, CgsSystem::EFrameRate  leLocalConsoleFrameRate, CgsSystem::EFrameRate  leRemoteConsoleFrameRate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:1790
		uint16_t lu16MessageFrameToCompare;

	}
}

// BrnNetworkTrafficManager.cpp:1902
void BrnNetwork::TrafficManager::RemoveBufferedMessage(BrnNetwork::TrafficManager::BufferedMessage *  lpMsg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator=(/* parameters */);
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:1927
void BrnNetwork::TrafficManager::DeleteOutOfDateBufferedMesssages(uint16_t  lu16MessageFrameToCompare) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:1929
		int32_t liIndex;

	}
	CgsNetwork::UInt16IsLargerOrEqualWrapped(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:1959
void BrnNetwork::TrafficManager::SendHullSyncMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:1961
		AggressiveMoveData::NetworkPlayerID lPlayerID;

	}
	{
		// BrnNetworkTrafficManager.cpp:1967
		int32_t liIndex;

	}
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Clear(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:2064
void BrnNetwork::TrafficManager::SendTrafficHashingMessage(bool  lbAreWePlaying) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:2066
		BrnNetwork::TrafficHashMessage * lpTrafficHashMessage;

		// BrnNetworkTrafficManager.cpp:2067
		int32_t liIndex;

		// BrnNetworkTrafficManager.cpp:2068
		int32_t liNumNetworkPlayers;

		// BrnNetworkTrafficManager.cpp:2069
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkTrafficManager.cpp:2070
		uint16_t lu16CurrentFrame;

	}
}

// BrnNetworkTrafficManager.cpp:356
void BrnNetwork::TrafficManager::AddPlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:358
		int32_t liIndex;

		// BrnNetworkTrafficManager.cpp:359
		BrnNetwork::TrafficManager::TrafficSyncData * lpDataEntry;

		// BrnNetworkTrafficManager.cpp:360
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Clear(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:482
void BrnNetwork::TrafficManager::ClearHullSyncData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:484
		int32_t liIndex;

		CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Clear(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:247
void BrnNetwork::TrafficManager::ResetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemSet(/* parameters */);
	CgsContainers::RingBuffer<BrnNetwork::TrafficManager::TrafficHash>::Clear(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:459
void BrnNetwork::TrafficManager::ClearCrashingTraffic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:461
		int32_t liIndex;

	}
	CgsCore::MemSet(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:968
void BrnNetwork::TrafficManager::OnTrafficRestarted() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::RingBuffer<BrnNetwork::TrafficManager::TrafficHash>::Clear(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:528
void BrnNetwork::TrafficManager::OnGameStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkTrafficManager.cpp:501
void BrnNetwork::TrafficManager::OnGameLaunching() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:503
		int32_t liIndex;

	}
	CgsCore::MemSet(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:210
void BrnNetwork::TrafficManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:214
		DebugInterface lDebugInterface;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:102
void BrnNetwork::TrafficManager::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule, CgsNetwork::PlayerManager *  lpPlayerManager, CgsNetwork::TimeManager *  lpTimeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:104
		int32_t liIndex;

	}
	CgsContainers::BitArray<7u>::UnSetAll(/* parameters */);
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Construct(/* parameters */);
	CgsContainers::FixedRingBuffer<BrnNetwork::TrafficManager::TrafficHash,128>::Construct(/* parameters */);
	CgsContainers::RingBuffer<BrnNetwork::TrafficManager::TrafficHash>::Clear(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:163
void BrnNetwork::TrafficManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:165
		int32_t liIndex;

	}
	CgsContainers::BitArray<7u>::UnSetAll(/* parameters */);
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Construct(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:546
void BrnNetwork::TrafficManager::OnRoundStart(bool  lbDoingFreeburnLobby) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<7u>::UnSetAll(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:572
void BrnNetwork::TrafficManager::OnRoundFinish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:574
		int32_t liIndex;

	}
	CgsCore::MemSet(/* parameters */);
	CgsContainers::BitArray<7u>::UnSetAll(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:601
void BrnNetwork::TrafficManager::OnLeaveGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkTrafficManager.cpp:1695
void BrnNetwork::TrafficManager::RetrieveBufferedMessage(uint16_t  lu16MessageFrameToCompare) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:1697
		int32_t liIndex;

		// BrnNetworkTrafficManager.cpp:1698
		uint16_t lu16MessageFramesSinceStart;

		// BrnNetworkTrafficManager.cpp:1699
		BrnNetwork::TrafficManager::BufferedMessage * lpBufferedMessage;

	}
	CgsNetwork::UInt16IsLargerOrEqualWrapped(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:1843
void BrnNetwork::TrafficManager::IsMessageFromBeforeTrafficReset(uint16_t  lu16FramesSinceStartOnMessageSend, AggressiveMoveData::NetworkPlayerID  lSendingPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:1848
		CgsSystem::EFrameRate leRemoteConsoleFrameRate;

		// BrnNetworkTrafficManager.cpp:1849
		uint16_t lu16MessageComparisonFrame;

		// BrnNetworkTrafficManager.cpp:1850
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		CgsNetwork::NetworkPlayer::GetRemoteConsoleFrameRate(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		CgsNetwork::UInt16IsLargerWrapped(/* parameters */);
		CgsNetwork::UInt16IsLargerOrEqualWrapped(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:616
void BrnNetwork::TrafficManager::RestartNetworkTraffic(AggressiveMoveData::NetworkPlayerID  lClientReadyID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:618
		int32_t liTrafficDataIndex;

		CgsContainers::BitArray<7u>::SetBit(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:655
void BrnNetwork::TrafficManager::GetTrafficSyncDataEntry(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:657
		int32_t liIndex;

	}
	{
		// BrnNetworkTrafficManager.cpp:669
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:398
void BrnNetwork::TrafficManager::RemovePlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:400
		BrnNetwork::TrafficManager::TrafficSyncData * lpEntry;

		// BrnNetworkTrafficManager.cpp:401
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Clear(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:434
void BrnNetwork::TrafficManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:436
		int32_t liIndex;

	}
}

// BrnNetworkTrafficManager.cpp:800
void BrnNetwork::TrafficManager::HandleHullSyncMessage(EActiveRaceCarIndex  leActiveRaceCarIndex, uint16_t  lu16TrafUpdateToActivate, int32_t  liHull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:802
		int32_t liPlayerIndex;

	}
	{
		// BrnNetworkTrafficManager.cpp:808
		const AggressiveMoveData::NetworkPlayerID lPlayerID;

		{
			// BrnNetworkTrafficManager.cpp:813
			HullToActivateInfo * lpBufferedMessage;

			CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Grow(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:758
void BrnNetwork::TrafficManager::UpdateHullSync() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:760
		int32_t liIndex;

		// BrnNetworkTrafficManager.cpp:761
		TrafficNetworkInputInterface::ActivateHullQueue lActivateHullQueue;

		// BrnNetworkTrafficManager.cpp:762
		ActivateHullEvent lActivateHullEvent;

		// BrnNetworkTrafficManager.cpp:763
		const TrafficNetworkOutputInterface * lpTrafficOutputInterface;

	}
	BrnNetworkModule::GetTrafficOutputInterface(/* parameters */);
	CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>::Construct(/* parameters */);
	CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:838
void BrnNetwork::TrafficManager::_HullSyncMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:840
		BrnNetwork::TrafficManager::TrafficSyncData::BufferedHullsToActivate lBufferedHullActivates;

		// BrnNetworkTrafficManager.cpp:841
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

		// BrnNetworkTrafficManager.cpp:842
		TrafficManager * lpTrafficSyncManager;

		// BrnNetworkTrafficManager.cpp:843
		BrnNetwork::HullSyncMessage * lpHullSyncMessage;

		// BrnNetworkTrafficManager.cpp:844
		BrnNetwork::BrnNetworkModule * lpNetworkModule;

		// BrnNetworkTrafficManager.cpp:845
		TrafficNetworkInputInterface * lpTrafficInputInterface;

		// BrnNetworkTrafficManager.cpp:846
		uint32_t luMessage;

	}
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Array(/* parameters */);
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Construct(/* parameters */);
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::GetLength(/* parameters */);
	{
		// BrnNetworkTrafficManager.cpp:866
		HullToActivateInfo * lpActivate;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::operator[](/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsNetwork::MessageWithPlayerIDs::GetSendingPlayerID(/* parameters */);
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
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
	CgsNetwork::MessageWithPlayerIDs::GetSendingPlayerID(/* parameters */);
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnNetworkModule::GetTrafficInputInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficNetworkInputInterface::ActivateHull(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:921
void BrnNetwork::TrafficManager::_HullSyncMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, AggressiveMoveData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[34] __FUNCTION__;

	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:1126
void BrnNetwork::TrafficManager::BufferRestartTrafficMessage(BrnNetwork::TrafficManager::BufferedRestartMessage  lBufferedRestartMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::UInt16IsLargerWrapped(/* parameters */);
	CgsNetwork::UInt16IsLargerOrEqualWrapped(/* parameters */);
	{
		// BrnNetworkTrafficManager.cpp:1134
		uint32_t luPlayer;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkTrafficManager.cpp:1151
		uint32_t luPlayer;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
			// BrnNetworkTrafficManager.cpp:1171
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:1239
void BrnNetwork::TrafficManager::_RestartTrafficMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:1241
		BrnNetwork::TrafficManager::BufferedRestartMessage lBufferedRestartMessage;

		// BrnNetworkTrafficManager.cpp:1242
		AggressiveMoveData::NetworkPlayerID[8] laPlayerIDsForActiveHulls;

		// BrnNetworkTrafficManager.cpp:1243
		uint16_t[8] lau16ActiveHulls;

		// BrnNetworkTrafficManager.cpp:1244
		CgsSystem::EFrameRate leRemoteConsoleFrameRate;

		// BrnNetworkTrafficManager.cpp:1245
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnNetworkTrafficManager.cpp:1246
		uint16_t lu16TimeToRestartTraffic;

		// BrnNetworkTrafficManager.cpp:1247
		TrafficManager * lpTrafficManager;

		// BrnNetworkTrafficManager.cpp:1248
		BrnNetwork::RestartTrafficMessage * lpRestartTrafficMessage;

		// BrnNetworkTrafficManager.cpp:1249
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	operator++(/* parameters */);
	{
		// BrnNetworkTrafficManager.cpp:1276
		EActiveRaceCarIndex leRaceCarIndexForPlayerID;

		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	}
	operator++(/* parameters */);
	CgsNetwork::NetworkPlayer::GetRemoteConsoleFrameRate(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:996
void BrnNetwork::TrafficManager::HandleSendingRestartTrafficMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:998
		BrnNetwork::TrafficManager::BufferedRestartMessage lBufferedRestartMessage;

		// BrnNetworkTrafficManager.cpp:999
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkTrafficManager.cpp:1000
		uint16_t lu16CurrentFrame;

		// BrnNetworkTrafficManager.cpp:1001
		uint16_t lu16RestartTrafficTime;

		// BrnNetworkTrafficManager.cpp:1002
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// BrnNetworkTrafficManager.cpp:1003
		BrnNetwork::RestartTrafficMessage * lpRestartTrafficMessage;

		// BrnNetworkTrafficManager.cpp:1004
		const TrafficNetworkOutputInterface * lpTrafficOutputInterface;

	}
	{
		// BrnNetworkTrafficManager.cpp:1014
		AggressiveMoveData::NetworkPlayerID[8] laPlayerIDsForActiveHulls;

		// BrnNetworkTrafficManager.cpp:1015
		EActiveRaceCarIndex lePlayerIndex;

		// BrnNetworkTrafficManager.cpp:1016
		uint16_t[8] laActiveHulls;

		BrnNetworkModule::GetTrafficOutputInterface(/* parameters */);
		BrnNetworkModule::GetTrafficOutputInterface(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::GetActiveHulls(/* parameters */);
		CgsCore::MemCpy(/* parameters */);
		{
			// BrnNetworkTrafficManager.cpp:1042
			AggressiveMoveData::NetworkPlayerID lPlayerId;

			BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
		}
		operator++(/* parameters */);
		BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::GetActiveHulls(/* parameters */);
		CgsCore::MemCpy(/* parameters */);
		CgsContainers::BitArray<7u>::UnSetAll(/* parameters */);
	}
	BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::GetActiveHulls(/* parameters */);
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

// BrnNetworkTrafficManager.cpp:1190
void BrnNetwork::TrafficManager::IsTrafficRestartRequired(uint16_t *  lpauOutActiveHulls, uint16_t *  lpuOutRestartFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:1201
		uint16_t lu16FramesSinceStart;

		// BrnNetworkTrafficManager.cpp:1202
		bool lbTrafficRestartRequired;

	}
	CgsNetwork::UInt16IsLargerOrEqualWrapped(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:1310
void BrnNetwork::TrafficManager::_RestartTrafficMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, AggressiveMoveData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[40] __FUNCTION__;

	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:1328
void BrnNetwork::TrafficManager::SuppressTrafficRestart(bool  lbSuppress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:1448
void BrnNetwork::TrafficManager::GetCrashingTrafficData(CrashingTrafficData *  lpaCrashingTrafficData, int32_t *  lpCrashingTrafficDataCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:1450
		CrashingTrafficUpdateEvent lCrashingTrafficEvent;

		// BrnNetworkTrafficManager.cpp:1451
		int32_t liIndex;

		// BrnNetworkTrafficManager.cpp:1452
		int32_t liNumCrashingTrafficEvents;

		// BrnNetworkTrafficManager.cpp:1453
		const NetworkInputInterface::CrashingTrafficUpdateQueue * lpOwnedCrashingTrafficQueue;

		// BrnNetworkTrafficManager.cpp:1454
		const NetworkOutputInterface * lpCrashOutputInterface;

	}
	BrnNetworkModule::GetCrashOutputInterface(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetLength(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetEvent(/* parameters */);
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:1364
void BrnNetwork::TrafficManager::SendCrashingTrafficMessages(bool  lbAreWePlaying) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:1366
		int32_t liIndex;

		// BrnNetworkTrafficManager.cpp:1367
		int32_t liNumNetworkPlayers;

		// BrnNetworkTrafficManager.cpp:1368
		int32_t liCrashingTrafficDataCount;

		// BrnNetworkTrafficManager.cpp:1369
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkTrafficManager.cpp:1370
		uint16_t lu16CurrentFrame;

		// BrnNetworkTrafficManager.cpp:1371
		uint16_t lu16FramesSinceRoundStart;

		// BrnNetworkTrafficManager.cpp:1372
		BrnNetwork::CrashingTrafficMessage * lpCrashingTrafficMessage;

		// BrnNetworkTrafficManager.cpp:1373
		CrashingTrafficData[24] laCrashingTrafficData;

		{
			// BrnNetworkTrafficManager.cpp:1392
			AggressiveMoveData::NetworkPlayerID lLocalNetworkPlayerID;

			CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		}
		BrnNetworkModule::GetNetworkManager(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:1635
void BrnNetwork::TrafficManager::StoreBufferedMessage(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID, BrnNetwork::CrashingTrafficMessage *  lpMsg, CgsSystem::EFrameRate  leLocalConsoleFrameRate, CgsSystem::EFrameRate  leRemoteConsoleFrameRate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:1637
		uint16_t lu16MessageFrameToCompare;

		// BrnNetworkTrafficManager.cpp:1668
		AggressiveMoveData::NetworkPlayerID lLocalNetworkPlayerID;

	}
	CgsNetwork::UInt16IsLargerWrapped(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	CgsNetwork::Message::Release(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:1484
void BrnNetwork::TrafficManager::ReceiveCrashingTrafficMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:1486
		int32_t liIndex;

		// BrnNetworkTrafficManager.cpp:1487
		int32_t liCrashingTrafficDataCount;

		// BrnNetworkTrafficManager.cpp:1488
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnNetworkTrafficManager.cpp:1489
		EActiveRaceCarIndex leOwningActiveRaceCarIndex;

		// BrnNetworkTrafficManager.cpp:1490
		uint16_t lu16FrameToGetMessage;

		// BrnNetworkTrafficManager.cpp:1491
		CgsSystem::EFrameRate leLocalConsoleFrameRate;

		// BrnNetworkTrafficManager.cpp:1492
		CgsSystem::EFrameRate leRemoteConsoleFrameRate;

		// BrnNetworkTrafficManager.cpp:1493
		CrashingTrafficData * lpaCrashingTrafficData;

		// BrnNetworkTrafficManager.cpp:1494
		BrnNetwork::CrashingTrafficMessage * lpReceivedMessage;

		// BrnNetworkTrafficManager.cpp:1495
		BrnNetwork::TrafficManager::BufferedMessage * lpBufferedMessage;

		// BrnNetworkTrafficManager.cpp:1496
		NetworkInputInterface * lpCrashInputInterface;

		// BrnNetworkTrafficManager.cpp:1497
		CgsNetwork::ServerInterfaceGames * lpServerInterfaceGames;

	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	CgsNetwork::Message::Release(/* parameters */);
	{
		// BrnNetworkTrafficManager.cpp:1577
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkTrafficManager.cpp:1516
		AggressiveMoveData::NetworkPlayerID lSendingPlayerID;

		// BrnNetworkTrafficManager.cpp:1517
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
		CgsNetwork::Message::Release(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnNetworkModule::GetCrashInputInterface(/* parameters */);
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	BrnWorld::CrashIO::NetworkInputInterface::IsRaceCarMarkedForUpdate(/* parameters */);
	BrnWorld::CrashIO::NetworkInputInterface::MarkRaceCarForUpdate(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:1344
void BrnNetwork::TrafficManager::UpdateCrashingTraffic(bool  lbAreWePlaying) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkTrafficManager.cpp:2034
void BrnNetwork::TrafficManager::StoreTrafficHash(uint16_t  lu16Update10HzFrame, uint16_t  lu16TrafficHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:2037
		BrnNetwork::TrafficManager::TrafficHash lTrafficHash;

	}
	CgsContainers::RingBuffer<BrnNetwork::TrafficManager::TrafficHash>::Push(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:2255
void BrnNetwork::TrafficManager::CalcWrappedUpdateFrameDifference(int32_t  liUpdate10HzFrameA, int32_t  liUpdate10HzFrameB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkTrafficManager.cpp:2215
void BrnNetwork::TrafficManager::FindHashForFrame(uint16_t  lu16Update10HzFrame, uint16_t *  lpu16OutHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:2217
		int32_t liStoredHash;

	}
}

// BrnNetworkTrafficManager.cpp:2118
void BrnNetwork::TrafficManager::ReceiveTrafficHashingMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:2120
		int32_t liIndex;

		// BrnNetworkTrafficManager.cpp:2121
		uint16_t lu16FramesSinceStartOnMessageSend;

		// BrnNetworkTrafficManager.cpp:2122
		uint16_t lu16TrafficHash;

		// BrnNetworkTrafficManager.cpp:2123
		uint16_t lu16Update10HzFrame;

		// BrnNetworkTrafficManager.cpp:2124
		uint16_t lu16OurHash;

		// BrnNetworkTrafficManager.cpp:2125
		bool lbNewMessage;

	}
	{
		// BrnNetworkTrafficManager.cpp:2157
		int32_t liFrameDifference;

		CalcWrappedUpdateFrameDifference(/* parameters */);
		FindHashForFrame(/* parameters */);
	}
	CgsNumeric::Max(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	CgsContainers::RingBuffer<BrnNetwork::TrafficManager::TrafficHash>::operator[](/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkTrafficManager.cpp:1993
void BrnNetwork::TrafficManager::UpdateTrafficHashing(bool  lbAreWePlaying) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:1995
		uint16_t lu16Update10HzFrame;

		// BrnNetworkTrafficManager.cpp:1996
		uint16_t lu16TrafficHash;

		// BrnNetworkTrafficManager.cpp:1997
		const TrafficNetworkOutputInterface * lpTrafficOutputInterface;

	}
	BrnNetworkModule::GetTrafficInputInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficNetworkInputInterface::SetDiverged(/* parameters */);
	BrnNetworkModule::GetTrafficOutputInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:1093
void BrnNetwork::TrafficManager::ProcessBufferedRestartTrafficMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:1095
		NetworkOutRestartTrafficEvent lRestartTrafficEvent;

		// BrnNetworkTrafficManager.cpp:1096
		uint16_t luIntendedUpdateFrame;

	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutRestartTrafficEvent>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkTrafficManager.cpp:938
void BrnNetwork::TrafficManager::UpdateRestartTraffic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkTrafficManager.cpp:279
void BrnNetwork::TrafficManager::Update(bool  lbAreWePlaying) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkTrafficManager.cpp:311
		char[1024] lacBuf;

	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	CgsContainers::RingBuffer<BrnNetwork::TrafficManager::TrafficHash>::Clear(/* parameters */);
	{
		// BrnNetworkTrafficManager.cpp:335
		DebugInterface lDebugInterface;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
		CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkTrafficManager.cpp:317
		DebugInterface lDebugInterface;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
		CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	}
	{
		// BrnNetworkTrafficManager.cpp:323
		float32_t lfTimeInPast;

		// BrnNetworkTrafficManager.cpp:326
		DebugInterface lDebugInterface;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
		CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	}
}

