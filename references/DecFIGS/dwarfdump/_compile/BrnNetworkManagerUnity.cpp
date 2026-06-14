struct _CGprogram;

struct _CGparameter;

struct AptSharedPtr<AptFile>;

struct AptFloatArrayCXForm;

struct AptUint32CXForm;

struct AptSavedInputRecord;

// Declaration
struct AptValue {
	// AptValue.h:596
	enum CIH_ONLY {
		CO_CIH = 0,
	}

protected:
	// AptValue.h:554
	extern const uint32_t MAX_REFCOUNT = 4095;

}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::StrStreamBase(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::SPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:106
		va_list lArgument;

		// CgsStringUtils.h:107
		int32_t lNumBytesCopied;

	}
}

void CgsCore::SnPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:129
		va_list lArgument;

		// CgsStringUtils.h:130
		int32_t lNumBytesCopied;

	}
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetRankedGame(bool  lbIsRanked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetRankedGame(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::AnswerCreateAccount(bool  lbAgree) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::AnswerShareInfo(bool  lbAgree1, bool  lbAgree2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::AnswerSignIn(bool  lbSuccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::ShowSignInGui() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::FinishedWithTOS() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<7u>::IsZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern BrnNetwork::TrafficManager::BufferedMessage & operator=(const const BrnNetwork::TrafficManager::BufferedMessage &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern CrashingTrafficData & operator=(const const CrashingTrafficData &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UInt16IsLargerOrEqualWrapped(uint16_t  lu16A, uint16_t  lu16B) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::Push(const StatsRequestEvent *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStats::IsLocalPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<10>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void BrnNetwork::LiveRevengeProfile::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::SetLastTimeChanged(DateAndTime  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkNotificationManagerBase::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkNotificationManagerBase::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkNotificationManagerBase::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkNotificationManagerBase::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkNotificationManagerBase::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkNotificationManagerBase::ProcessNotifications() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkNotificationManagerBase::Connect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkNotificationManagerBase::Disconnect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfacePlayerInfoDataBase::GetGameID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::SortServerBuddyList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::GameInviteAvailable(const PlayerName *  lpPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::OnLeaveGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<50u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<50u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsNetwork::PlayerManager::GetNumBufferedReliableMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ReliableMessageManager::GetNumBufferedReliableMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::TimeManager::GetU16FrameCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::TimeManager::GetFrameCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::IsMessageValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerPS3::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerPS3::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerPS3::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerPS3::UpdateShowChatPopup(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerPS3::StartDirtySockSignIn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerPS3::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::GetTexture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::GetTextureSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::GetHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::GetFormat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::IsUncompressedYUV() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetBuddyManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkNotificationManagerPS3::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkNotificationManagerPS3::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkNotificationManagerPS3::Connect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkNotificationManagerPS3::Disconnect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkNotificationManagerPS3::ProcessNotifications() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerPS3::MessageSent(bool  lbSuccess, int32_t  liErrorCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerPS3::JoinGameComplete(bool  lbSuccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::PlayerName::Clear(/* parameters */);
}

void CgsContainers::BitArray<10u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<10u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnNetwork::BrnNetworkManager::GetServerInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::UpdateGetConfigurationData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::UpdatePingRegions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManager::GetPlayerManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetSuspensionManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::SuspensionManager::IsSuspending() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::GetPlayerName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UsernameCompare(const char *  lpacName1, const char *  lpacName2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::IsLocalPlayersBuddyListAlphabetical() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:1148
		int32_t liBuddyIndex;

		{
			// BrnNetworkBuddyManagerBase.cpp:1152
			PlayerName lPlayerName1;

			// BrnNetworkBuddyManagerBase.cpp:1153
			PlayerName lPlayerName2;

			CgsNetwork::UsernameCompare(/* parameters */);
		}
	}
}

void CgsNetwork::ServerInterfaceRankings::IsBusy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceComponent::GetStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerPS3::AcceptInvite(const PlayerName *  lpPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerPS3::PerformInvite(PlayerName *  lpPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerPS3::JoinBuddy(const PlayerName *  lpBuddyName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::ClearPlayerList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:1043
		int32_t liBuddyIndex;

		CgsNetwork::PlayerName::Clear(/* parameters */);
	}
}

void BrnNetwork::BuddyManagerBase::Disconnect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:309
		int32_t liIndex;

		CgsNetwork::PlayerName::Clear(/* parameters */);
	}
}

void BrnNetwork::BuddyManagerPS3::Prepare(const BrnHW::LaunchData *  lpSoftRebootData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::PlayerName::Clear(/* parameters */);
}

void BrnNetwork::BuddyManagerPS3::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::PlayerName::Clear(/* parameters */);
}

void BrnNetwork::BrnNetworkManager::GetStatsManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::GetFloatVal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManager::GetHostMigrationManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::SelectedRoutesManager::SetRoutesChanged(bool  lbRoutesChanged) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::stdc::Max(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::stdc::Min(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<60>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<60>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void CgsContainers::FastBitArray<60>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>::Push(const NetworkInSelectScoreboardEvent *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerManager::GetNextLocalPlayerID(AggressiveMoveData::NetworkPlayerID *  lpPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManager::GetTimeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>::Pop(NetworkInRoadRulesPBEvent *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::Pop(StatsRequestEvent *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStats::GetPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStats::SetStatAsInt(BrnNetwork::NetworkPlayerStats::EStatsValue  leValue, int32_t  liStat, BrnNetwork::NetworkPlayerStats::EStatType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetScoreboardManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::PrepareDownloadingScoreboardHeadings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::UpdateConnectingTelemetry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStats::GetStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStatsResults::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::IsPlayerAheadInCurrentRelationship() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::ScoreSettled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::GetCurrentScoreForRival() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::GetCurrentScoreForLocalPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Event() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::StatsRequestEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::StatsRequestEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeId::VolumeId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::RigidBodyId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<double>::Vector2Template(double  _x, double  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<double>::Vector3Template(double  _x, double  _y, double  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(double  _x, double  _y, double  _z, double  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::SmallResource(const const SmallMemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<3u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::DegToRad<float>(float  angle_degrees) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void CgsResource::BaseResourcePtr::~BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::RemoveFromCurrentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __static_initialization_and_destruction_0(int  __initialize_p, int  __priority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetNumLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLightTriggerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::GetHull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerId::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::GetLightTriggerIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::IsRivalAheadInCurrentRelationship() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::Time(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator>=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UniquePlayerIDPS3::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CommonRelationship::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CommonRelationshipStats::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerManager::IsLocalPlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemSet(void *  lpDestination, int  liValue, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnNetwork::TrafficManager::TrafficHash>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::strstr(char *  _Str1, const char *  _Str2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStats::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetNetworkPlayerID(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::GetNetworkPlayerID(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleGameStateIOInterfaces.h:518
		int32_t liIndex;

	}
}

void BrnNetwork::BrnNetworkModule::GetActiveRaceCarIndex(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::GetActiveRaceCarIndex(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleGameStateIOInterfaces.h:493
		int32_t liIndex;

	}
}

void CgsMemory::HeapMalloc::GetAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::atoi(const char *  _Str) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeAquire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::~DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeRelease(DebugManager *  lpDebugManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<8u>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<8u>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsNetwork::ServerInterfaceEndGameDataBase::~ServerInterfaceEndGameDataBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceEndGameData::~ServerInterfaceEndGameData(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceEndGameDataBase::~ServerInterfaceEndGameDataBase(/* parameters */);
}

void CgsContainers::BitArray<50u>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<50u>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<50u>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsNetwork::ServerInterfaceQuickJoinParamsBase::~ServerInterfaceQuickJoinParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceQuickJoinParams::~ServerInterfaceQuickJoinParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceQuickJoinParamsBase::~ServerInterfaceQuickJoinParamsBase(/* parameters */);
}

void CgsContainers::BitArray<7u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<7u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FixedRingBuffer<BrnNetwork::TrafficManager::TrafficHash,128>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnNetwork::TrafficManager::TrafficHash>::Construct(BrnNetwork::TrafficManager::TrafficHash *  lpBuffer, int32_t  liBufferLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<7u>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsNetwork::ServerInterfaceStructureInterface::~ServerInterfaceStructureInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceGameParamsBase::~ServerInterfaceGameParamsBase(/* parameters */);
}

void BrnNetwork::PlayerParams::~PlayerParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetwork::PlayerParamsBase::~PlayerParamsBase(/* parameters */);
}

void CgsNetwork::ServerInterfacePlayerParams::~ServerInterfacePlayerParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfacePlayerParamsBase::~ServerInterfacePlayerParamsBase(/* parameters */);
}

void BrnNetwork::GameSearchParams::~GameSearchParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetwork::GameSearchParamsPS3::~GameSearchParamsPS3(/* parameters */);
}

void CgsNetwork::ServerInterfaceGameSearchParams::~ServerInterfaceGameSearchParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceGameSearchParamsBase::~ServerInterfaceGameSearchParamsBase(/* parameters */);
}

void CgsNetwork::ServerInterfaceUsersetParams::~ServerInterfaceUsersetParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceUsersetParamsBase::~ServerInterfaceUsersetParamsBase(/* parameters */);
}

void CgsNetwork::ServerInterfacePlayerInfoData::~ServerInterfacePlayerInfoData(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfacePlayerInfoDataBase::~ServerInterfacePlayerInfoDataBase(/* parameters */);
}

void CgsNetwork::UniquePlayerIDPS3::GetPlayerName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UniquePlayerIDPS3::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerId::SetIndex(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::Construct(int32_t  liEventID, LightTriggerId  lTrafficLightTriggerId, LandmarkIndex *  lpLandmarks, int32_t  liNumLandmarks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:1488
		int32_t liIndex;

	}
}

void BrnNetwork::LiveRevengeRelationship::GetTotalTakedowns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfacePlayerInfoDataBase::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::IsDoingFreeBurnLobby() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.h:766
		CgsNetwork::ServerInterfaceGames * lpGames;

	}
}

void CgsNetwork::ServerInterfaceDirtySock::GetGameComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetComponent(CgsNetwork::EComponents  leComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetNetworkInviteManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStats::GetTimeStamp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator<(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern NetworkPlayerStats & operator=(const const NetworkPlayerStats &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfacePlayerInfoDataBase::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetConnectionComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsShowtimeGameMode(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManager::GetStartTimeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsOnlineFreeBurnLobby(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsOnlineEvent(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::UpdateResumingServerInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::Finished(bool  lbSuccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManager::GetVoIPManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::VoIPManager::SetChatRestricted(bool  lbIsRestricted) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerPS3::ShowChatRestrictionPopup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLoginManagerPS3.cpp:288
		int liRestricted;

	}
	CgsNetwork::VoIPManager::SetChatRestricted(/* parameters */);
}

void BrnNetwork::LoginManagerPS3::UpdateAccountSignIn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerPS3::UpdateSignInToNP() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLoginManagerPS3.cpp:186
		int32_t liConnectionStatus;

	}
}

void BrnNetwork::LoginManagerPS3::PlatformSpecificUpdate(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::ShowChatRestrictionPopup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::ResumeCompleteCallback(bool  lbSuccess, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLoginManagerBase.cpp:1097
		BrnNetwork::LoginManagerBase * lpLoginManager;

	}
}

void BrnNetwork::LoginManagerBase::AnswerChatRestricted(bool  lbSuccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::AnswerNoAgreement(bool  lbRestart) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::CancelLogin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::AnswerOpenUsAccount(bool  lbAgree) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::LogInToServer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLoginManagerBase.cpp:850
		char[20] lacUserName;

		// BrnNetworkLoginManagerBase.cpp:851
		char[20] lacPassword;

	}
}

void BrnNetwork::LoginManagerBase::UpdateConnectingOnline() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceDirtySock::GetConnectionComponent(/* parameters */);
}

void BrnNetwork::LoginManagerBase::IsSigningIn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::Start(BrnNetwork::LoginManagerBase::ESignInType  leSignInType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerPS3::Start(BrnNetwork::LoginManagerBase::ESignInType  leSignInType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetPlayerInfoComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::PrepareLoadSettings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetUsersetsComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceUsersetParamsBase::IsLocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceUsersetParamsBase::Unlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceUsersetParamsBase::Lock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetServerInfoComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetHttpComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::PrepareDownloadingTOS() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLoginManagerBase.cpp:490
		const char * lpcUrlToUse;

		// BrnNetworkLoginManagerBase.cpp:491
		char[256] lacTosURL;

	}
}

void CgsNetwork::ServerInterfaceDirtySock::GetCustomCommandsComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::GetServerFriends() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:417
		BrnNetwork::ServerInterfaceCustomCommands * lpCustomCommandsComponent;

		CgsNetwork::ServerInterfaceDirtySock::GetCustomCommandsComponent(/* parameters */);
	}
}

void BrnNetwork::NetworkPlayerStatsManager::ServerBusy(CgsNetwork::EComponents  leComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceBase::GetCustomCommandsComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::_UploadFriendsToServerComplete(void *  lpData, void *  lpParamData, bool  lbSuccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:1243
		BrnNetwork::BuddyManagerBase * lpBuddyManager;

	}
	{
		// BrnNetworkBuddyManagerBase.cpp:1258
		BrnNetwork::BrnServerInterface * lpServerInterface;

	}
	CgsCore::MemCpy(/* parameters */);
}

void BrnNetwork::BrnServerInterfaceBase::GetDownloadableConfigComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetDownloadableConfigComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::UpdateLoggingIn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLoginManagerBase.cpp:457
		BrnNetwork::BrnServerInterfaceDownloadableConfig * lDownloadableConf;

	}
}

void BrnNetwork::BrnServerInterfaceBase::GetTelemetryComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetTelemetryComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::SetTelemetryCountryList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLoginManagerBase.cpp:1281
		const char * lpcTelemetryCountryList;

	}
}

void CgsNetwork::ServerInterfaceDirtySock::GetPingRegionsComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::PreparePingRegions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::UpdateLoadSettings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetRankingsComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeManager::GetProfile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfacePlayerInfoDataBase::GetRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfacePlayerInfoDataBase::GetLocality() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetSelectedRoutesManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkPlayer::HasConnectionFailed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetPlayerTeam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetNetworkManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:448
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkManager::GetCamera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetGamerPictureManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CameraPS3::GetFriendsOnlySetting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesDownloadData::GetNumScores() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesDownloadEvent::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkSharedIO.h:413
		BrnStreetData::ScoreType leScoreType;

	}
}

void BrnStreetData::operator++(const BrnStreetData::ScoreType &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeData.h:56
		BrnStreetData::ScoreType leOldEnumIndex;

	}
}

void BrnNetwork::RoadRulesMessageData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesDownloadData::GetRoadRulesDataForDownloadIndex(int32_t  liDownloadIndex, char *  lpcPlayerName, int32_t *  lpiScoreType, int32_t *  lpiQuantisedScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrnCpy(char *  lpcDest, const char *  lpcSource, unsigned int  luBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:55
		CgsDev::StrStream lStrStream;

	}
}

void CgsNetwork::PlayerName::Construct(const char *  lpcPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerName.h:87
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModule::GetNetworkToGameStateInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:487
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetRoadRulesDownloadedQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::AddEvent(const const RoadRulesDownloadEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[124] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::SetFloatVal(float32_t  lfFloatVal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:329
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::NetworkNotificationManagerBase::OnConnectionSignOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Construct(TakedownEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::SetEventPointer(TakedownEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkPlayer::GetRemoteConsoleFrameRate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UInt16IsLargerWrapped(uint16_t  lu16A, uint16_t  lu16B) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::LoginManagerPS3::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UniquePlayerIDPS3::Construct(CgsNetwork::ServerInterfacePlayerParams *  lpPlayerParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfacePlayerParamsBase::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UniquePlayerIDPS3::Construct(const char *  lpcPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::PopulateServerBuddyList(char *  lpaBuddyList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:1064
		int32_t liBuddyIndex;

		// BrnNetworkBuddyManagerBase.cpp:1065
		char * lpcBuddyListReadLocation;

		CgsNetwork::PlayerName::Construct(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
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

void BrnNetwork::LoginManagerPS3::GetUserNameAndPassword(char *  lacUserName, char *  lacPassword) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::StrnCpy(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
}

void CgsNetwork::ServerInterfaceGameParamsBase::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceUsersetParamsBase::SetName(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::GetMaxPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceUsersetParamsBase::SetMaxPlayers(int32_t  liMaxPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::RoadRulesRecvData,14>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Construct(RoadRulesRecvData *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::SetEventPointer(RoadRulesRecvData *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::TimeUntilRetryAfterFailedBuddyUpload() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::_GetFriendsListFromServerComplete(void *  lpData, void *  lpParamData, bool  lbSuccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:1182
		BrnNetwork::BuddyManagerBase * lpBuddyManager;

		// BrnNetworkBuddyManagerBase.cpp:1183
		BrnNetwork::BrnServerInterface * lpServerInterface;

	}
	BrnServerInterfaceDownloadableConfig::TimeUntilRetryAfterFailedBuddyUpload(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BuddyManagerBase::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:93
		int32_t liIndex;

	}
	CgsNetwork::PlayerName::Clear(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

void BrnNetwork::BuddyManagerPS3::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::PlayerName::Clear(/* parameters */);
}

void BrnNetwork::BuddyManagerBase::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule, BrnNetwork::BrnServerInterface *  lpServerInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:51
		int32_t liIndex;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
	}
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsNetwork::PlayerName::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BuddyManagerPS3::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule, BrnNetwork::BrnServerInterface *  lpServerInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::PlayerName::Clear(/* parameters */);
}

void CgsSystem::Time::Time() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceBase::GetDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceDebugComponent::SetConnectionType(CgsNetwork::ServerInterfaceGames::EGameServerConnectionType  leConnectionType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetGameStateToNetworkInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:495
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::GetIsInOnlineGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::GetDirtyTrickQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<60>::IsBitSet(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:395
		int32_t liMaskIndex;

		// CgsFastBitArray.h:396
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:393
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::FastBitArray<60>::SetBit(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:430
		int32_t liMaskIndex;

		// CgsFastBitArray.h:431
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:428
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::BitArray<2u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnStreetData::ChallengePlayerScoreEntry::GetCarID(BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
		{
			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
			}
			{
				(None)unknown_arg
				(None)unknown_arg
			}
			{
				(None)unknown_arg
				(None)unknown_arg
			}
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
	}
}

void BrnStreetData::ChallengePlayerScoreEntry::GetCarID(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<2u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnStreetData::ChallengeData::IsDirty(BrnStreetData::ScoreType  leVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<2u>::GetFirstNonZeroBit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:543
		uint32_t liIndex;

		{
			// CgsBitArray.h:553
			int32_t liFirstOneBit;

			{
				// CgsBitArray.h:554
				CgsDev::StrStream lStrStream;

			}
		}
		{
			// CgsBitArray.h:559
			int32_t liFirstOneBit;

		}
	}
}

void CgsContainers::BitArray<2u>::GetZeroBitInInt(int64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:796
		uint32_t liLeadingZeros;

	}
}

void CgsContainers::_CountLeadingZeros64(uint64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:169
		uint64_t luRes;

	}
}

void BrnStreetData::ChallengeData::GetScore(BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::ScoreList::GetScore(BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::ChallengeData::ContainsData(BrnStreetData::ScoreType  leVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesUploadData::GetNumScores() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::AddEvent(const const RoadRulesRecvData &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[119] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetRoadRulesReceivedQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<10u>::GetFirstZeroBit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:590
		uint32_t liIndex;

		{
			// CgsBitArray.h:600
			int32_t liFirstZeroBit;

			{
				// CgsBitArray.h:601
				CgsDev::StrStream lStrStream;

			}
		}
		{
			// CgsBitArray.h:606
			int32_t liFirstZeroBit;

		}
	}
}

void CgsContainers::BitArray<10u>::GetZeroBitInInt(int64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:796
		uint32_t liLeadingZeros;

	}
}

void CgsSystem::Time::operator=(float  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:137
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::operator++(const BrnNetwork::NetworkPlayerStats::EStatsValue &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStats.h:218
		BrnNetwork::NetworkPlayerStats::EStatsValue leOldEnumIndex;

	}
}

void rw::math::vpu::IsValid(const rw::math::vpu::Matrix44Affine &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsValid(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsValid(const VecFloat  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsNaN(const VecFloat  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsEqualV4(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:246
		bool ret;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

extern void CrashingTrafficUpdateEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::AddEvent(const const CrashingTrafficUpdateEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[135] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern CrashingTrafficUpdateEvent & operator=(const const CrashingTrafficUpdateEvent &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::NetworkInputInterface::AddTrafficUpdate(uint32_t  luVehicleIndex, uint32_t  luOwnerRaceCarIndex, const rw::math::vpu::Matrix44Affine &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleNetworkIOInterfaces.h:229
		CrashingTrafficUpdateEvent lEvent;

	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::AddEvent(/* parameters */);
	operator=(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetMaxLength(/* parameters */);
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

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::AddDirtyTrickEvent(EActiveRaceCarIndex  leAggressorActiveRaceCarIndex, EActiveRaceCarIndex  leVictimActiveCarIndex, uint8_t  lu8DirtyTrickType, uint8_t  lu8DirtyTrickStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleGameStateIOInterfaces.h:644
		DirtyTrickEvent lEvent;

	}
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::AddEvent(const const DirtyTrickEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[137] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::ChallengeData::SetScore(BrnStreetData::ScoreType  leScoreType, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<2u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnStreetData::ScoreList::SetScore(BrnStreetData::ScoreType  leScoreType, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::ChallengePlayerScoreEntry::SetCarID(BrnStreetData::ScoreType  leScoreType, CgsID  lCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::LiveRevengeManager::AutoSaveLiveRevengeProfile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::GetRivalName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetLiveRevengeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern OnlineGameResults & operator=(const const OnlineGameResults &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::AddEvent(const const ImpactEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[122] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::AddEvent(const const TakedownEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[117] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void AggressiveMoveData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::AggressiveMoveData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::UpdateConnectingDS() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLoginManagerBase.cpp:349
		CgsNetwork::EServerInterfaceError leError;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnNetwork::LoginManagerBase::UpdateDownloadingScoreboardHeadings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLoginManagerBase.cpp:721
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::LoginManagerBase::SendUPnPTelemetry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// protoupnp.h:51
		typedef CgsNetwork::DirtySock::ProtoUpnpRefT ProtoUpnpRefT;

		// BrnNetworkLoginManagerBase.cpp:1300
		ProtoUpnpRefT * lpProtoUpnp;

		// BrnNetworkLoginManagerBase.cpp:1301
		int32_t liUpnpStatus;

		// BrnNetworkLoginManagerBase.cpp:1302
		char[128] lacRouterName;

		// BrnNetworkLoginManagerBase.cpp:1303
		int32_t liNumMessages;

		// BrnNetworkLoginManagerBase.cpp:1304
		int32_t liStringLength;

		// BrnNetworkLoginManagerBase.cpp:1305
		char[16] lacTelemetryMessageBuffer;

		// BrnNetworkLoginManagerBase.cpp:1306
		char * lpcStringPointer;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::TelemetryFiltersFirstUse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::TelemetryFiltersNormalUse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::PrepareConnectTelemetry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLoginManagerBase.cpp:1147
		bool lbHaveWeUploadedFirstUsageData;

		// BrnNetworkLoginManagerBase.cpp:1148
		const char * lpacTelemetryFiltersFirstUse;

		// BrnNetworkLoginManagerBase.cpp:1149
		const char * lpacTelemetryFiltersNormalUse;

		// BrnNetworkLoginManagerBase.cpp:1170
		int32_t liRetVal;

	}
	BrnServerInterfaceBase::GetDownloadableConfigComponent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnNetwork::LoginManagerBase::UpdateWaitingForPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLoginManagerBase.cpp:634
		BrnNetwork::PlayerInfoData lPlayerInfo;

		PlayerInfoData::PlayerInfoData(/* parameters */);
	}
	PlayerInfoData::~PlayerInfoData(/* parameters */);
}

void CgsSystem::Time::Time(float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:115
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::Time::operator+(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsTime.h:146
	Time & lNewTime;

	{
		// CgsTime.h:146
		Time lNewTime;

		{
			// CgsTime.h:157
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnNetwork::PlayerParamsBase::SetPlaying(bool  lbIsPlaying) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfacePlayerParamsBase::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator-(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsTime.h:165
	Time & lNewTime;

	{
		// CgsTime.h:165
		Time lNewTime;

		{
			// CgsTime.h:188
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsNetwork::NetworkPlayer::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator<=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetMatchMakingManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetName(const char *  lacName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetMinPlayers(int32_t  liMinPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetMaxPlayers(int32_t  liMaxPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetFixedGame(bool  lbIsFixed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventNetworkCreateGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventNetworkCreateGame::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEventTypeDefs.h:6678
		uint32_t luRoundIndex;

		// BrnGuiEventTypeDefs.h:6679
		LightTriggerId lTriggerID;

	}
}

void BrnNetwork::PlayerParamsBase::SetConsoleFrameRate(CgsSystem::EFrameRate  leConsoleFrameRate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerParams.h:309
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::PlayerParamsBase::SetRank(int32_t  liRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetFreeBurnCarID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetFreeBurnCarID(CgsID  lCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkEncodeUncompressedCgsID(char *  lpcBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkUtils.h:179
		int32_t liChar;

	}
}

void BrnNetwork::BrnNetworkManager::GetCurrentCarColourIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetCarColourIndex(uint16_t  lu16CarColourIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetCurrentPaintFinishIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetPaintFinishIndex(uint16_t  lu16PaintFinishIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::HasFever() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetHasFever(bool  lbHasFever) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::IsDeveloper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetIsDeveloper(bool  lbIsDeveloper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceDebugComponent::GetConnectionType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetPaintFinishIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetJoinUserset(bool  lbJoinUserset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfacePlayerParamsBase::GetFirewallSettings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceQuickJoinParamsBase::SetJoinUserset(bool  lbJoinUserset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetPostRoundManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::IsPlaying() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetMarkedPlayerID(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetReady(bool  lbIsReady) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::UnlockGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::TimeManager::HasStartFrameBeenSetValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(float32_t  lfReal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:598
		union UFloatInt {
			// CgsStrStream.h:599
			float32_t mfReal;

			// CgsStrStream.h:600
			int32_t miInt;

		}
		// CgsStrStream.h:602
		UFloatInt lFloatInt;

	}
}

void BrnNetwork::BrnNetworkManager::GetRound() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<7u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Grow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:284
		HullToActivateInfo * lpNew;

		{
			// CgsArray.h:282
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnNetwork::BrnNetworkModule::GetTrafficOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:400
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Construct(ActivateHullEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::SetEventPointer(ActivateHullEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::GetActivateHullQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>::operator=(const const EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Append(const const BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsNetwork::MessageWithPlayerIDs::GetSendingPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::GetType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetTrafficInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:392
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkInputInterface::ActivateHull(EActiveRaceCarIndex  leActiveRaceCarIndex, uint32_t  luNewActiveHull, uint32_t  luUpdateFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficNetworkInterfaces.h:222
		ActivateHullEvent lEvent;

	}
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::AddEventSafe(const const ActivateHullEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::GetActiveHulls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetCrashOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:416
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::NetworkOutputInterface::GetCrashingTrafficUpdateQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CrashingTrafficData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::CrashingTrafficMessage::GetFramesSinceStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::SetDealtWith() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkPlayer::GetLocalConsoleFrameRate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetCrashInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:408
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::NetworkInputInterface::IsRaceCarMarkedForUpdate(int32_t  liRaceCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::NetworkInputInterface::MarkRaceCarForUpdate(int32_t  liRaceCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::RingBuffer<BrnNetwork::TrafficManager::TrafficHash>::Push(const BrnNetwork::TrafficManager::TrafficHash *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRingBuffer.h:137
		CgsDev::StrStream lStrStream;

	}
}

void CgsNumeric::Max(int32_t  li0, int32_t  li1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBranchlessOperations.h:45
		int64_t li64_0;

		// CgsBranchlessOperations.h:46
		int64_t li64_1;

		// CgsBranchlessOperations.h:47
		int64_t li64Diff;

		// CgsBranchlessOperations.h:48
		int64_t li64Sign;

		// CgsBranchlessOperations.h:49
		int32_t liResult;

	}
}

void CgsContainers::RingBuffer<BrnNetwork::TrafficManager::TrafficHash>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnNetwork::TrafficManager::TrafficHash>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::HasHashBeenSet() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::GetDataHash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::GetUpdateFrameForHash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkInputInterface::SetDiverged(bool  lbDiverged) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::TimeTillStatsExpire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsRequestEvent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkPlayerStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsRequestEvent::GetPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetStatsOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:925
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOBuffer::IsBufferLockedForWriting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::StatsOutputInterface::AppendStatsEvent(NetworkPlayerStats *  lpStats) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::NetworkPlayerStats>::AddEventSafe(const const NetworkPlayerStats &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::NetworkPlayerStats>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::NetworkPlayerStats>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStats::SetPlayerID(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator>(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStats::IsCalculated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStats::SetStatus(BrnNetwork::NetworkPlayerStats::EStatsStatus  leNewStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStats::SetTimeStamp(Time &  lTimeStamp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStats::SetCalculated(bool  lbIsCalculated) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetTakedownEventInputQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:312
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkDecodeUncompressedCgsID(char *  lpcBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkUtils.h:201
		int32_t liChar;

	}
}

void BrnNetwork::Scoreboard::GetNumberOfColumns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::Append(const const LiveRevengeRelationship &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::LiveRevengeRelationship::GetLastChangedTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>::AddEvent(const const NetworkToGuiLiveRevengeUpdate &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[131] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::FastBitArray<10>::SetBit(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:430
		int32_t liMaskIndex;

		// CgsFastBitArray.h:431
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:428
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnNetwork::LiveRevengeManager::GetRevengeRelationship(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetTakedownEventInputQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:550
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOBuffer::IsBufferLockedForReading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Append(const const BaseEventQueue<BrnGameState::TakedownEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ImpactEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetVehicleOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:589
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetImpactEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::IsCurrentRelationshipEqual() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetNetworkToGuiInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:971
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGuiInterface::AddLiveRevengeUpdate(EActiveRaceCarIndex  leAggressorActiveRaceCarIndex, EActiveRaceCarIndex  leVictimActiveRaceCarIndex, BrnNetwork::NetworkToGuiLiveRevengeUpdate::LiveRevengeStatus  leNewStatus, int32_t  liDifference) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkToGuiIOInterfaces.h:123
		NetworkToGuiLiveRevengeUpdate lLiveRevengeUpdate;

	}
}

void BrnNetwork::LiveRevengeRelationship::GetRelationshipStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<10>::Iterator::operator++() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:250
		uint64_t luTempSourceMask;

		// CgsFastBitArray.h:251
		uint64_t luStartMaskIndex;

		// CgsFastBitArray.h:252
		uint64_t luStartMaskMod;

		// CgsFastBitArray.h:253
		uint64_t luMaskIndex;

		// CgsFastBitArray.h:254
		const uint64_t * lpxSourceMasks;

		// CgsFastBitArray.h:256
		int32_t liCurrIndex;

		// CgsFastBitArray.h:257
		uint64_t lxCurrMask;

	}
	{
		// CgsFastBitArray.h:279
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:311
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:247
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:281
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:248
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::FastBitArray<10>::Iterator::Iterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<10>::Begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<10>::Iterator::Iterator(const uint64_t *  lpxSourceMasks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<10>::Iterator::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:232
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::LiveRevengeRelationship::GetTotalEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::GetOverallStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<10>::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<10>::Iterator::operator!=(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlineRoundResults::GetPosition(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameActions.h:6551
		int32_t liIndex;

		{
			// BrnGameActions.h:6571
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::DateAndTime::IsZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeProfile::ValidateProfile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.h:489
		uint32_t liRelationshipIndex;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::BitArray<10u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void CgsNetwork::Message::GetU16Frame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<10u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkManager::GetLoginManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::GetDebugManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManager::GetVersionDisplay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<1536,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<1536,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1536,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
}

void CgsModule::VariableEventQueue<1536,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1536,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<1536,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void StartNetworkRoundEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:328
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:1569
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameStateSharedIO.h:1570
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetEventID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameEvents.h:3237
		int32_t liPlayerDataIndex;

	}
}

void CgsNetwork::ServerInterfaceGameParamsBase::GetRandomSeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::IsRankedGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetGameData(bool  lbIsRanked, bool  lbIsTrafficOn, bool  lbRedTeamHaveInfiniteBoost, bool  lbIsTrafficCheckingOn, BrnNetwork::EBoostType  leBoostType, int32_t  liNumRunnerCrashes, float32_t  lfEventTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetTimeLimit(float32_t  lfNewTimeLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetLocalNetworkPlayerID(AggressiveMoveData::NetworkPlayerID  lLocalNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::HasFever() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetPlayerData(int32_t  liGridPosition, AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID, CgsID  lCarID, CgsID  lWheelID, uint16_t  lu16CarColourIndex, uint16_t  lu16CarPaintFinishIndex, BrnGameState::GameStateModuleIO::EPlayerTeam  lePlayerTeam, bool  lbIsHost, bool  lbHasFever) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::SetRound(int32_t  liRoundNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetRanked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::StartTimeManager::HasStartTimePassed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::VoIPManager::SetGameSendingHeadsetStatus(bool  lbGameSendingHeadsetStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CameraPS3::SendCameraStatusMessages(bool  lbSendCameraStatusMessages) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4096,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4096,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<4096,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModule::AddOutputGuiEvent<BrnGui::GuiEventNetworkCustomMatchResults>(const GuiEventNetworkCustomMatchResults &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModule::GetOutputGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:468
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<252>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::AddOutputGuiEvent<BrnGui::GuiEventNetworkPlayerImage>(const GuiEventNetworkPlayerImage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<256>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::GetCurrentGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetFreeBurnWheelID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::VersionDisplay::SetGameServerGame(bool  lbGameServerGame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::AddOutputGuiEvent<BrnGui::GuiEventNetworkLeavingGameFailed>(const GuiEventNetworkLeavingGameFailed &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<273>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetVehicleInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:841
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetTakedownEventOutputQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:752
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleInputInterface::ClearImpactEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:767
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<478>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleInputInterface::AddImpactEvent(ImpactEvent *  lpImpactEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceHttp::GetHttpDownloadSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventAddLocalisedTextPointer>(const GuiEventAddLocalisedTextPointer &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<12>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::UpdateDownloadingTOS() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLoginManagerBase.cpp:519
		char * lpacDownloadBuffer;

	}
	{
		// BrnNetworkLoginManagerBase.cpp:553
		GuiEventAddLocalisedTextPointer lAddTextPointer;

		CgsCore::StrnCpy(/* parameters */);
		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventAddLocalisedTextPointer>(/* parameters */);
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

void BrnNetwork::LoginManagerBase::Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::AnswerAgreeTOS(bool  lbAgree) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLoginManagerBase.cpp:954
		GuiEventAddLocalisedTextPointer lAddTextPointer;

	}
	CgsCore::StrnCpy(/* parameters */);
	BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventAddLocalisedTextPointer>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModule::AddOutputGuiEvent<BrnGui::GuiEventNetworkNewsAndTOS>(const GuiEventNetworkNewsAndTOS &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<264>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::IsEqualTo(const const PlayerName &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::GetBuddiesToAddAndRemoveFromServer(PlayerName *  lpaPlayerNamesToAdd, PlayerName *  lpaPlayerNamesToRemove, int32_t *  lpiNumPlayersToAdd, int32_t *  lpiNumPlayersToRemove, bool *  lpbOverwriteServerFriends) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:550
		PlayerName lServerBuddyName;

		// BrnNetworkBuddyManagerBase.cpp:551
		PlayerName lBuddyName;

		// BrnNetworkBuddyManagerBase.cpp:552
		int32_t liServerBuddyIndex;

		// BrnNetworkBuddyManagerBase.cpp:553
		int32_t liBuddyIndex;

		// BrnNetworkBuddyManagerBase.cpp:554
		int32_t liPlayerAddIndex;

		// BrnNetworkBuddyManagerBase.cpp:555
		int32_t liPlayerRemoveIndex;

	}
	CgsNetwork::PlayerName::IsEqualTo(/* parameters */);
	CgsNetwork::UsernameCompare(/* parameters */);
	{
		// BrnNetworkBuddyManagerBase.cpp:625
		int32_t liServerBuddyCheckIndex;

		// BrnNetworkBuddyManagerBase.cpp:626
		bool lbFoundMatchingEntry;

		{
			// BrnNetworkBuddyManagerBase.cpp:638
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsNetwork::PlayerName::Construct(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	CgsNetwork::PlayerName::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsNetwork::PlayerName::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsNetwork::PlayerName::IsEqualTo(/* parameters */);
	CgsNetwork::PlayerName::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsNetwork::PlayerName::Construct(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BuddyManagerBase::UploadServerFriends() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:443
		PlayerName[100] laBuddiesToAdd;

		// BrnNetworkBuddyManagerBase.cpp:444
		PlayerName[100] laBuddiesToRemove;

		// BrnNetworkBuddyManagerBase.cpp:445
		int32_t liNumPlayersToAdd;

		// BrnNetworkBuddyManagerBase.cpp:446
		int32_t liNumPlayersToRemove;

		// BrnNetworkBuddyManagerBase.cpp:447
		BrnNetwork::ServerInterfaceCustomCommands * lpCustomCommandsComponent;

		// BrnNetworkBuddyManagerBase.cpp:448
		bool lbOverwriteServerFriends;

	}
	{
		// BrnNetworkBuddyManagerBase.cpp:493
		int32_t liBuddyIndex;

		{
			// BrnNetworkBuddyManagerBase.cpp:497
			PlayerName lPlayerName;

		}
	}
	CgsNetwork::ServerInterfaceDirtySock::GetCustomCommandsComponent(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnNetworkBuddyManagerBase.cpp:507
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsNetwork::ServerInterfaceDirtySock::GetCustomCommandsComponent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnNetwork::BuddyManagerDebugComponent::GetEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetNetworkEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:530
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<14000,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnNetwork::BuddyManagerBase::ProcessDebugEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:871
		NetworkEventQueue * lpEventQueue;

	}
	BuddyManagerDebugComponent::GetEventQueue(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	CgsModule::VariableEventQueue<14000,16>::Clear(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
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

void BrnNetwork::BuddyManagerBase::IsBuddyListAlphabetical(PlayerName *  lpBuddyList, int32_t  liNumBuddies) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:1121
		int32_t liBuddyIndex;

	}
	CgsNetwork::UsernameCompare(/* parameters */);
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

void CgsModule::VariableEventQueue<13312,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<13312,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>::Push(const NetworkInRoadRulesPBEvent *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::AddEvent(const const RoadRulesMessageData &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[122] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::RoadRulesLocalPlayerDownloadedScores::GetRoadRulesDataForDownloadIndex(int32_t  liDownloadIndex, int32_t *  lpiScoreType, int32_t *  lpiQuantisedScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesLocalPlayerDownloadedScores::GetRoadRulesID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetLocalRoadRulesDownloadedQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManager::GetNetworkAdapter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkAdapterPS3::GetTitleContextID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerPS3::CustomMessageArrived(int8_t  liMessageType, const char *  lpcMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerPS3.cpp:199
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<14000,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<14000,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<14000,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
}

void CgsModule::VariableEventQueue<14000,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<14000,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<14000,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<3>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerPS3::OutputNextUnreadChatMessage(const PlayerName *  lpBuddyName, NetworkEventQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerPS3.cpp:214
		NetworkOutChatMessage lMessageEvent;

	}
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutChatMessage>(/* parameters */);
}

void BrnNetwork::BuddyManagerBase::GetNetworkModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<9>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerPS3::InviteArrived(const PlayerName *  lpPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerPS3.cpp:175
		NetworkOutBuddyNotification lEvent;

		BuddyManagerBase::GetNetworkModule(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutBuddyNotification>(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<4>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerPS3::ChatMessageArrived(const char *  lpcMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerPS3.cpp:158
		NetworkOutMessageArrived lEvent;

		BuddyManagerBase::GetNetworkModule(/* parameters */);
	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutMessageArrived>(/* parameters */);
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<63>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<62>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<53>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlineRoundResults::GetWinner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetNetworkEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:994
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<21>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<55>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<54>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::ChallengeData::SetClean(BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<2u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<2u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<34>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::TimeBetweenRoadRulesUploads() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>::Push(const NetworkOutRecvRoadRulesPBEvent *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<33>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::TimeBetweenRoadRulesDownloads() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<36>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkConnected>(const GuiEventNetworkConnected &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<43>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetRoadRulesManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<2>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::SendBuddyInformation(NetworkEventQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:808
		NetworkOutBuddyInformation lEvent;

		// BrnNetworkBuddyManagerBase.cpp:809
		int32_t liBuddySlotIndex;

	}
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutBuddyInformation>(/* parameters */);
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<1>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::CountBuddies(NetworkEventQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:767
		NetworkOutBuddyCount lEvent;

		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutBuddyCount>(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<6>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkInviteManager::SetPreparingForInvite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::StartInvite(InviteOrJoinParams  lInviteOrJoinParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:337
		NetworkOutInviteRequest lRequestInviteEvent;

	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutInviteRequest>(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	NetworkInviteManager::SetPreparingForInvite(/* parameters */);
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

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<14>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::HandleBuddyListChange() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:233
		int32_t liBuddyIndex;

		// BrnNetworkBuddyManagerBase.cpp:234
		int32_t liNumFullBuddies;

		// BrnNetworkBuddyManagerBase.cpp:235
		bool lbUpdateServerBuddies;

		{
			// BrnNetworkBuddyManagerBase.cpp:251
			int32_t liCachedBuddyIndex;

		}
		{
			// BrnNetworkBuddyManagerBase.cpp:282
			PlayerName lBuddyName;

		}
	}
	{
		// BrnNetworkBuddyManagerBase.cpp:258
		NetworkOutBuddyRemovedEvent lBuddyRemovedEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutBuddyRemovedEvent>(/* parameters */);
	}
}

void CgsSystem::Time::operator-=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:222
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BuddyManagerBase::Update(bool  lbUpdateBuddyList, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkManager::GetTimeStep(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator-=(/* parameters */);
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

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<67>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<43>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::GetCompletedSignInType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<37>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceTelemetry::EnableTemetry(bool  lbEnable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<47>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::SetIsDeveloper(bool  lbIsDeveloper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkDisconnected>(const GuiEventNetworkDisconnected &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<44>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<12>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetForceStartFreeburnLobby(bool  lbForce) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetStartingGameAfterPlayerJoin(bool  lbIsStartingGameAfterPlayerJoin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetStartingFreeburnLobbyAfterOnlineEvent(bool  lbIsStartingFreeburnLobbyAfterOnlineEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StartNetworkGameEvent::GetStartingGameAfterPlayerJoin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<40>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkInGame>(const GuiEventNetworkInGame &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<50>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkInGameFailed>(const GuiEventNetworkInGameFailed &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<51>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<24>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkGoneOffline>(const GuiEventNetworkGoneOffline &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<46>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<23>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetGameID(int32_t  liGameID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetSession(const char *  lacSession) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<39>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::GetPlayerInFreeburnChallenge(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<46>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<28>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetMarkedManManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::MarkedManManager::GetNumberOfPlayersFinishedMarking() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<31>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::SetHeadingType(BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::EHeadingType  leHeadingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::AddHeading(const char *  lpcHeading) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::SetPerRoad(bool  lbIsPerRoad) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<49>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<41>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkOutEventTimeRemaining() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<30>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CameraPS3::GetRequestedPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetNetworkImageManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<68>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerPS3::OutputChatMessage(const PlayerName *  lpBuddyName, int32_t  liMessageIndex, NetworkEventQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerPS3.cpp:135
		NetworkOutChatMessage lMessageEvent;

	}
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutChatMessage>(/* parameters */);
}

void CgsContainers::BitArray<50u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<50u>::GetFirstZeroBit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:590
		uint32_t liIndex;

		{
			// CgsBitArray.h:600
			int32_t liFirstZeroBit;

			{
				// CgsBitArray.h:601
				CgsDev::StrStream lStrStream;

			}
		}
		{
			// CgsBitArray.h:606
			int32_t liFirstZeroBit;

		}
	}
}

void CgsContainers::BitArray<50u>::GetZeroBitInInt(int64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:796
		uint32_t liLeadingZeros;

	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<52>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<51>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::SendEmptyBuddyInformation(NetworkEventQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:786
		NetworkOutBuddyInformation lEvent;

		{
			// BrnNetworkBuddyManagerBase.cpp:785
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	CgsCore::MemSet(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutBuddyInformation>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnNetwork::BuddyManagerBase::ProcessEvent(const CgsModule::Event *  lpNetworkEvent, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:743
		const NetworkInJoinBuddy * lpJoinEvent;

	}
	GetNetworkModule(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	{
		// BrnNetworkBuddyManagerBase.cpp:729
		const NetworkInDeclineInvite * lpDeclineEvent;

	}
	{
		// BrnNetworkBuddyManagerBase.cpp:722
		const NetworkInAcceptInvite * lpInviteEvent;

	}
	{
		// BrnNetworkBuddyManagerBase.cpp:736
		const NetworkInRevokeInvite * lpRevokeEvent;

	}
	GetNetworkModule(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkManager::GetLaunchManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkLaunched>(const GuiEventNetworkLaunched &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<58>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<26>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>::Pop(NetworkInSelectScoreboardEvent *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetScoreboardEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetChosenCategory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetChosenIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetChosenVariation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceRankings::GetUserType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardEvent::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardEvent::GetScoreboard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<48>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void BrnNetwork::BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkLeavingGame>(const GuiEventNetworkLeavingGame &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<53>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<25>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::IsReady() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetMarkedPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventNetworkPlayerStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::AddOutputGuiEvent<BrnGui::GuiEventNetworkPlayerStats>(const GuiEventNetworkPlayerStats &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<245>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameSearchParamsBase::SetReturnPlayers(bool  lbReturnPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetPlayerTeam(BrnGameState::GameStateModuleIO::EPlayerTeam  lePlayerTeam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventLocalisedTextPointerRemoved::IsThisTheRemovedString(const char *  lpcStringRemoved) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiEventTypeDefs.h:467
		uint32_t luHash;

	}
}

void CgsContainers::CgsHash::CalculateHash(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<10>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerBase::BuddyListHasChanged() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:939
		int32_t liBuddyIndex;

		// BrnNetworkBuddyManagerBase.cpp:940
		int32_t liNumNewOnlineBuddies;

		// BrnNetworkBuddyManagerBase.cpp:941
		NetworkOutBuddyListChanged lEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		{
			// BrnNetworkBuddyManagerBase.cpp:959
			PlayerName lBuddyName;

		}
		{
			// BrnNetworkBuddyManagerBase.cpp:998
			NetworkOutBuddyNotification lBuddyNotificationEvent;

			CgsNetwork::PlayerName::Clear(/* parameters */);
			BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
			AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutBuddyNotification>(/* parameters */);
		}
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutBuddyListChanged>(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
	}
	{
		// BrnNetworkBuddyManagerBase.cpp:984
		NetworkOutBuddyNotification lBuddyNotificationEvent;

		// BrnNetworkBuddyManagerBase.cpp:985
		int32_t liIndexOfLastBuddyToComeOnline;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
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

void BrnNetwork::BrnNetworkManager::GetConnectionManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetActiveRaceCarInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:596
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetActiveRaceCarColourIndex(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetActiveRaceCarPaintFinishIndex(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetCarColourIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::SetCurrentCarColourIndex(uint16_t  lu16CarColourIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::SetCurrentPaintFinishIndex(uint16_t  lu16PaintFinishIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<29>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<66>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetFreeBurnCarID(CgsID *  lpCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerParams.h:352
		char[13] lacCarID;

	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<8>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StateManager::IsMatchMaking() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ResetPlayerCarAction::HasToChangeCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ResetPlayerCarAction::GetCarModelId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::ResetPlayerCarAction::GetWheelModelId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::SetFreeBurnCar(CgsID  lModelID, CgsID  lWheelID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::IsFirstPrepareForMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetGameModeType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::IsMovingBetweenOnlineLobbyModes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::MinSyncTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::MaxSyncTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::StartTimeManager::SetSyncTimeTimeouts(Time &  lMinTimeToSyncTime, Time &  lMaxTimeToSyncTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::TimeToWaitForSilentClientReady() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::TimeToWaitForCommunicatingClientReady() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::StartTimeManager::SetWaitForClientReadyTimeouts(Time &  lTimeToWaitForSilentClientReady, Time &  lTimeToWaitForCommunicatingClientReady) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::WaitForStartTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::StartTimeManager::SetWaitForStartTimeTimeout(Time &  lTimeToWaitForStartTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::StartTimeManager::SetGapTillStartTime(Time &  lGapToLeaveBeforeStartTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::TimeGapBeforeStartTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::SetOnStartLine(bool  lbIsOnStartLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetTrafficManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetStandingsManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::SetEliminated(bool  lbIsEliminated) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::SetHasFever(bool  lbHasFever) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetNetworkEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:708
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<11>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerPS3::Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput, float32_t  lfTimeStep, bool  lbProcessInvites, bool  lbUpdateBuddyList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerPS3.cpp:298
		int32_t liGameID;

	}
	BrnNetworkModuleIO::PostSimulationInputBuffer::GetNetworkEventQueue(/* parameters */);
	BuddyManagerBase::GetNetworkModule(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	BuddyManagerBase::GetNetworkModule(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BuddyManagerBase::GetNetworkModule(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	{
		// BrnNetworkBuddyManagerPS3.cpp:332
		BrnNetwork::BrnServerInterface * lpServerInterface;

		// BrnNetworkBuddyManagerPS3.cpp:333
		int32_t liCurrentGameID;

		BuddyManagerBase::GetNetworkModule(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BuddyManagerBase::GetNetworkModule(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BuddyManagerBase::GetNetworkModule(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkManager::GetServerInterface(/* parameters */);
		{
			// BrnNetworkBuddyManagerPS3.cpp:359
			NetworkOutInviteFailed lInviteFailedEvent;

			BuddyManagerBase::GetNetworkModule(/* parameters */);
			BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
			AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutInviteFailed>(/* parameters */);
		}
	}
	{
		// BrnNetworkBuddyManagerPS3.cpp:414
		NetworkOutInviteSent lInviteSentEvent;

		BuddyManagerBase::GetNetworkModule(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutInviteSent>(/* parameters */);
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
		// BrnNetworkBuddyManagerPS3.cpp:389
		InviteOrJoinParams lParams;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkBuddyManagerPS3.cpp:375
		NetworkOutInviteFailed lInviteFailedEvent;

		BuddyManagerBase::GetNetworkModule(/* parameters */);
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

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<13>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesDataEvent::GetRoadRulesScoreData(ChallengePlayerScoreEntry *  lpChallengeData, int32_t  liDataSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesDataEvent::GetTimeStampOfLastRoadRulesDownload() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesDataEvent::GetRoadRulesID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:582
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BuddyManagerBase::ProcessNetworkQueue(const NetworkEventQueue *  lpInputEventQueue, NetworkEventQueue *  lpOutputEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerBase.cpp:913
		const CgsModule::Event * lpEvent;

		// BrnNetworkBuddyManagerBase.cpp:914
		int32_t liEventSize;

		// BrnNetworkBuddyManagerBase.cpp:915
		int32_t liEventType;

	}
	CgsModule::VariableEventQueue<14000,16>::GetFirstEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::WorldRegion::GetDistrict() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::SetCurrentDistrict(BrnWorld::EDistrict  leDistrict) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<27>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeManager::HandlePaybackInitialisedEvent(const NetworkInPaybackIntialised *  lpPaybackEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeManager::HandlePaybackSucceededEvent(const NetworkInPaybackSucceeded *  lpPaybackEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<56>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<65>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::SetLocalPlayerCrasherID(AggressiveMoveData::NetworkPlayerID  lCrasherEntityNetworkID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetGamerCardManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManager::GetActiveControllerPort() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkRoadRulesManager::FinishedBooting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:566
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetStatsInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:687
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::StatsInputInterface::GetStatsInputQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetTimerStatusOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:423
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::TimerStatusInterface::GetGameTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetCurrentTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator+=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:205
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::TimeBetweenOfflineProgressionUpload() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<50>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerPS3::ProcessNetworkQueue(const NetworkEventQueue *  lpInputEventQueue, NetworkEventQueue *  lpOutputEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerPS3.cpp:433
		const CgsModule::Event * lpEvent;

		// BrnNetworkBuddyManagerPS3.cpp:434
		int32_t liEventSize;

		// BrnNetworkBuddyManagerPS3.cpp:435
		int32_t liEventType;

		CgsModule::VariableEventQueue<14000,16>::GetFirstEvent(/* parameters */);
	}
	{
	}
	{
		// BrnNetworkBuddyManagerPS3.cpp:475
		const NetworkInSendFeedback * lpFeedbackEvent;

		BuddyManagerBase::GetNetworkModule(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BuddyManagerBase::GetNetworkModule(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BuddyManagerBase::GetNetworkModule(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BuddyManagerBase::GetNetworkModule(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
	}
	{
		// BrnNetworkBuddyManagerPS3.cpp:446
		const NetworkInGetChatMessage * lpChatEvent;

	}
	{
		// BrnNetworkBuddyManagerPS3.cpp:453
		const NetworkInSendChatMessage * lpSendMessage;

	}
	{
		// BrnNetworkBuddyManagerPS3.cpp:460
		const NetworkInGetNextUnreadMessage * lpBuddyEvent;

	}
	{
		// BrnNetworkBuddyManagerPS3.cpp:467
		const NetworkInUpdateRichPresence * lpRichPresenceEvent;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsNetwork::ServerInterfaceGameParamsBase::GetNumberOfPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::IsLocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerPS3::UpdateJoinableStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerPS3.cpp:510
		CgsNetwork::ServerInterfaceGames * lpServerInterfaceGames;

		// BrnNetworkBuddyManagerPS3.cpp:511
		bool lbIsJoinable;

		BuddyManagerBase::GetNetworkModule(/* parameters */);
	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	{
		// BrnNetworkBuddyManagerPS3.cpp:518
		BrnNetwork::GameParams lParams;

		// BrnNetworkBuddyManagerPS3.cpp:519
		int32_t liMaxPlayers;

		GameParams::GameParams(/* parameters */);
		CgsNetwork::ServerInterfaceGameParamsBase::GetMaxPlayers(/* parameters */);
		GameParams::~GameParams(/* parameters */);
	}
	CgsNetwork::ServerInterfaceGameParamsBase::IsRankedGame(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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

void BrnNetwork::BuddyManagerPS3::OnLeaveGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetNetworkManager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::EventQueue<BrnNetwork::RoadRulesRecvData,14>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Append(const const BaseEventQueue<BrnNetwork::RoadRulesRecvData> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>::Pop(NetworkOutRecvRoadRulesPBEvent *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::KU_INVALID_LANDMARK_INDEX = -1;

::::KF_ASPECTRATIO_WIDESCREEN = [63, 227, 142, 57];

::::KF_ASPECTRATIO_STANDARD = [63, 170, 170, 171];

::::KF_ASPECTRATIO_SQUARE = [63, 128, 0, 0];

::::KF_ASPECTRATIO_STAND_IN_PLEASE_REMOVE_ME = [63, 227, 142, 57];

::::KF_DEFAULT_FOVHORIZONTAL = [63, 201, 15, 219];

::::KF_DEFAULT_ASPECTRATIO = [63, 227, 142, 57];

::::KF_DEFAULT_NEARCLIPPLANE = [61, 204, 204, 205];

::::KF_DEFAULT_FARCLIPPLANE = [68, 122, 0, 0];

::::KF_DEFAULT_DEPTHOFFIELD = [63, 128, 0, 0];

::::kfSteeringPower = [63, 128, 0, 0];

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

CgsWorld::KU_INVALID_WORLD_MAP_VALUE = -1;

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

CgsFileSystem::KU_INVALID_FILE_ID = -1;

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnNetwork::KU16_INVALID_FRAME = -1;

BrnNetwork::KF_BATTLING_IMPACT_DELAY = [65, 0, 0, 0];

BrnNetwork::KF_LAUNCH_WAIT_TIME = [64, 64, 0, 0];

BrnNetwork::KF_SEARCH_INTERVAL = [63, 128, 0, 0];

BrnNetwork::KE_GAME_SERVER_CONNECTION_TYPE = 3;

BrnNetwork::KF_SECONDS_TO_FINISH_EVENT = [65, 160, 0, 0];

BrnNetwork::KF_SECONDS_TO_SHOW_ROUND_SUMMARY = [64, 160, 0, 0];

BrnNetwork::KF_TRAFFIC_DIVERGED_TEXT_SIZE = [65, 176, 0, 0];

BrnNetwork::KF_TRAFFIC_DIVERGED_TEXT_POS_X = [67, 123, 76, 205];

BrnNetwork::KF_TRAFFIC_DIVERGED_TEXT_POS_Y = [67, 30, 0, 0];

BrnNetwork::KF_TRAFFIC_IN_PAST_TEXT_SIZE = [65, 176, 0, 0];

BrnNetwork::KF_TRAFFIC_IN_PAST_TEXT_POS_X = [68, 18, 185, 154];

BrnNetwork::KF_TRAFFIC_IN_PAST_TEXT_POS_Y = [67, 30, 0, 0];

BrnNetwork::KF_TRAFFIC_RESTART_PENDING_TEXT_SIZE = [65, 176, 0, 0];

BrnNetwork::KF_TRAFFIC_RESTART_PENDING_TEXT_POS_X = [68, 6, 54, 102];

BrnNetwork::KF_TRAFFIC_RESTART_PENDING_TEXT_POS_Y = [67, 5, 0, 0];

BrnNetwork::KI_INVALID_STAT_VERSION = -1;

BrnNetwork::KI_OFFSET_NEEDS_RECENTERING = -1;

BrnNetwork::KI_INVALID_RACE_CAR_INDEX_TO_REVENGE_TABLE = -1;

BrnNetwork::KF_TIME_MAX = [65, 240, 0, 0];

BrnNetwork::KF_TIME_MIN = [65, 32, 0, 0];

BrnNetwork::KF_DELAY_HANDLING_BUDDY_CHANGE = [65, 32, 0, 0];

BrnNetwork::KF_TIME_BETWEEN_ROAD_RULES_DOWNLOADS = [63, 128, 0, 0];

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

BrnTraffic::KU_INVALID_SECTION = -1;

BrnTraffic::KU_INVALID_HULL = -1;

BrnTraffic::KU_INVALID_NEIGHBOUR = -1;

BrnTraffic::KU_INVALID_STOPLINE = -1;

BrnTraffic::KU_INVALID_FLOWTYPE = -1;

BrnTraffic::KU_INVALID_KILLZONEREGION = -1;

BrnTraffic::KU_INVALID_TRAFFIC_LIGHT_TRIGGER = -1;

BrnTraffic::KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE = [69, 204, 204, 0];

BrnTraffic::KU_INVALID_HULL_RUNTIME = -1;

BrnTraffic::KU_INVALID_UPDATE_FRAME = -1;

BrnTraffic::KF_UPDATE_TIME_DELTA_NO_SLOWMO = [61, 204, 204, 205];

BrnTraffic::KF_SECONDS_PER_MINUTE = [66, 112, 0, 0];

BrnTraffic::KF_HULL_CHANGE_PREDICTION_TIME = [64, 160, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_FEELERS_ANGLE = [62, 134, 10, 146];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_MAX = [64, 128, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_SCORE_FACTOR = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_PASSING_MAX_DISTANCE = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_HEIGHT_SKIP = [64, 64, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_MAX_RADIUS = [66, 112, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_SCORE_NEEDS_ACTION = [66, 130, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_ONLINE_SCORE_NEEDS_ACTION = [67, 72, 0, 0];

BrnTraffic::KF_DENSITY_BASE_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BBOX_FATNESS = [62, 225, 71, 174];

BrnTraffic::KF_VEHICLE_COLLIDABILITY_RADIUS = [65, 160, 0, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE = [67, 22, 0, 0];

BrnTraffic::KF_GENERATOR_PHASE_SHIFT = [63, 51, 51, 51];

BrnTraffic::KF_MIN_GENERATION_FACTOR = [63, 76, 204, 205];

BrnTraffic::KF_MAX_GENERATION_FACTOR = [63, 153, 153, 154];

BrnTraffic::KF_MAX_DIST_ACROSS_LANE_lhs = [63, 51, 51, 51];

BrnTraffic::KF_PARAM_END_OF_SECTION_APPROACH_DIST = [66, 160, 0, 0];

BrnTraffic::KF_PARAM_AVOIDANCE_BIAS = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_SPACE_FACTOR = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_NEXT_PARAM_TIME_THRESHOLD = [64, 0, 0, 0];

BrnTraffic::KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD = [65, 200, 0, 0];

BrnTraffic::KF_PARAM_MAX_ACCEL_FORCE = [62, 117, 194, 143];

BrnTraffic::KF_PARAM_MIN_MERGE_DISTANCE = [65, 96, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPAWN_DISTANCE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS = [64, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE = [65, 112, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_IMPATIENCE_PROB = [62, 153, 153, 154];

BrnTraffic::KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE = [63, 0, 0, 0];

BrnTraffic::KF_PARAM_FLASH_LIGHTS_PROB = [63, 25, 153, 154];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB = [63, 76, 204, 205];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB_PANICKING = [63, 51, 51, 51];

BrnTraffic::KF_SPONTANEOUS_CONE_DEPTH_lhs = [65, 240, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs = [65, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs = [65, 160, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs = [64, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BRAKING_FACTOR = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_START_DISTANCE_FROM_TARGET = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_STEERING_DELTA_lhs = [60, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_STEERING_ANGLE_lhs = [65, 200, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SWERVE_COS_ANGLE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE = [66, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_SAME_WAY_SWERVE_FACTOR = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_INDICATOR_FLASH_TIME = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_INDICATOR_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME = [62, 25, 153, 154];

BrnTraffic::KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = -6;

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH = [66, 152, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs = [63, 102, 102, 102];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME = [66, 32, 0, 0];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE = [61, 143, 92, 41];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY = [63, 51, 51, 51];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_IF_RISK = [63, 166, 102, 102];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY = [63, 192, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY = [63, 122, 225, 72];

BrnTraffic::KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE = [63, 25, 153, 154];

BrnTraffic::KF_VEHICLE_TIME_TO_STEER_FROM_SLAM = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_RECOVERY = [64, 160, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_CLEANUP = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_REINSERTION = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_REINSERTION = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_ROLL_FACTOR_lhs = [189, 204, 204, 205];

BrnTraffic::KF_VEHICLE_ROLL_FILTER_lhs = [67, 180, 0, 0];

BrnTraffic::KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_SCALE_lhs = [61, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs = [63, 115, 51, 51];

BrnTraffic::KF_APPROX_LANE_WIDTH_lhs = [64, 144, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs = [63, 166, 102, 102];

BrnTraffic::KF_RIVAL_MAX_DIST_TO_LANE = [65, 112, 0, 0];

BrnTraffic::KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR = [63, 76, 204, 205];

BrnTraffic::KF_VEHICLE_TIME_FOR_NEW_SWERVE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME = [61, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME = [63, 128, 0, 0];

BrnTraffic::KF_BULB_WARMTH_DELTA_PER_SECOND = [69, 156, 64, 0];

BrnTraffic::KF_STOP_LINE_REACTION_DISTANCE = [66, 32, 0, 0];

BrnTraffic::KF_LANE_CHANGE_DICE_ROLL_SCALE = [64, 160, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE = [67, 122, 0, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE = [67, 250, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_ONE = [65, 0, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_TWO = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ = [69, 97, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE_SQ = [71, 116, 36, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE_SQ = [72, 116, 36, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ = [70, 175, 200, 0];

BrnTraffic::KF_VEHICLE_AVOIDABILITY_RADIUS = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT = [63, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD = [63, 128, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT = [63, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS = [62, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD = [60, 35, 215, 10];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME = [61, 204, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE = [0, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN = [65, 240, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX = [66, 52, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL = [64, 160, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME = [65, 32, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK = [63, 128, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_CHANCE = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_TIMER = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT = [68, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU = [67, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP = [66, 180, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ = [70, 28, 64, 0];

BrnTraffic::KE_TRAFFIC_PERFMON_PAGE = 2;

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

BrnPhysics::Vehicle::kfVehicleDefaultAngularDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultLinearDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularDisplacement = [63, 0, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearVelocity = [71, 234, 96, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularVelocity = [65, 240, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultAngularDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultLinearDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxAngularDisplacement = [64, 160, 0, 0];

BrnPhysics::Vehicle::KF_STICK_AFTERTOUCH_MODIFIER = [62, 128, 0, 0];

BrnPhysics::Vehicle::KF_STUCK_IN_COLLISION_TEST_INTERVAL = [64, 160, 0, 0];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::physicsvehicledriftattribs::DriftAngularDamping = -7987274848054600901;

Attrib::Hash::physicsvehicledriftattribs::DriftMaxAngle = -2994767941176318032;

Attrib::Hash::physicsvehicledriftattribs::DriftSidewaysDamping = -2483459419315854033;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftStartSlip = -6912247002206191947;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftTimeToReachBaseSlip = -6629571209366667655;

Attrib::Hash::physicsvehicledriftattribs::GasDriftScaleFactor = -4333709530778156113;

Attrib::Hash::physicsvehicledriftattribs::GripFromBrake = -2382352998964909567;

Attrib::Hash::physicsvehicledriftattribs::GripFromGasLetOff = -639186851837051004;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushBaseInc = -1687458581941323946;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushTime = -2635178875663518084;

Attrib::Hash::physicsvehicledriftattribs::NaturalDriftScaleDecay = -701798028399705032;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorque = -30919134522791338;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorqueCutOffAngle = -327284094809810262;

Attrib::Hash::physicsvehicledriftattribs::NeutralTimeToReduceDrift = -1265753866060659382;

Attrib::Hash::physicsvehicledriftattribs::SideForceDirftScaleCutOff = -3301564056552839641;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftAngleCutOff = -2437558699454416996;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftSpeedCutOff = -7527846554673069815;

Attrib::Hash::physicsvehicledriftattribs::SideForcePeakDriftAngle = -1859027027580878885;

Attrib::Hash::physicsvehicledriftattribs::TimeForNaturalDrift = -2192670478953321175;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightX = -8854577714803822838;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightZ = -2898700536974267796;

Attrib::Hash::physicsvehiclebodyrollattribs::PitchSpringDampening = -2769872210820837534;

Attrib::Hash::physicsvehiclebodyrollattribs::RollSpringDampening = -8279220931350705981;

Attrib::Hash::physicsvehiclebodyrollattribs::WeightTransferDecayZ = -8641409400008704383;

Attrib::Hash::physicsvehiclesuspensionattribs::InAirDamping = -4391887702944398535;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxPitchDampingOnLanding = -5239064295522386902;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxRollDampingOnLanding = -2189969058134543695;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxVertVelocityDampingOnLanding = -7578424394703509952;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxYawDampingOnLanding = -9159666339184342346;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientDriftI = -2790084423631939863;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientP = -5300428111701324124;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMaxAngle = -5882573263584155911;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMinAngle = -703227396336610229;

Attrib::Hash::physicsvehiclesteeringattribs::StraightReactionBias = -153043821033732338;

Attrib::Hash::physicsvehicleengineattribs::Differential = -1187171424841002758;

Attrib::Hash::physicsvehicleengineattribs::EngineBraking = -7261967632121772986;

Attrib::Hash::physicsvehicleengineattribs::EngineLowEndTorqueFactor = -2588301351876699819;

Attrib::Hash::physicsvehicleengineattribs::FlyWheelInertia = -8061433635503997159;

Attrib::Hash::physicsvehicleengineattribs::GearRatios1 = -2125503289046983800;

Attrib::Hash::physicsvehicleengineattribs::GearRatios2 = -1019379010385919379;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs1 = -8165513262891634271;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs2 = -1326377965340261792;

Attrib::Hash::physicsvehicleengineattribs::MaxTorque = -4687445904566254869;

Attrib::Hash::physicsvehicleengineattribs::TorqueScales2 = -4818449724105158753;

Attrib::Hash::physicsvehicleengineattribs::TransmissionEfficiency = -2275951549147437131;

Attrib::Hash::physicsvehiclecollisionattribs::BodyBox = -7996561706975887698;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostBase = -4153969524460304374;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostKick = -6909139712711029827;

Attrib::Hash::physicsvehicleboostattribs::BlueMaxBoostSpeed = -2832201897230299495;

Attrib::Hash::physicsvehicleboostattribs::BoostBase = -1449587645724428634;

Attrib::Hash::physicsvehicleboostattribs::BoostKick = -7916157251067609346;

Attrib::Hash::physicsvehicleboostattribs::BoostKickHeightOffset = -7644159426826663967;

Attrib::Hash::physicsvehicleboostattribs::BoostKickMaxStartSpeed = -6769221666331370883;

Attrib::Hash::physicsvehicleboostattribs::BoostKickTime = -2762519771875884640;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBaseAttribs = -3240169895484535073;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBodyRollAttribs = -4714783353325512142;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleDriftAttribs = -1740125582048760770;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleEngineAttribs = -3611665628868408173;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleSteeringAttribs = -3941675927247818081;

Attrib::Hash::burnoutcarasset::CameraBumperBehaviourAsset = -2996460651824973746;

Attrib::Hash::burnoutcarasset::CarUnlockShot = -3361774045014665585;

Attrib::Hash::burnoutcarasset::DefaultWheel = -5763545711493309811;

Attrib::Hash::burnoutcarasset::EngineEntityKey = -8286362179805877589;

Attrib::Hash::burnoutcarasset::GameplayAsset = -4159014215320274250;

Attrib::Hash::burnoutcarasset::GraphicsAsset = -2452633230673053972;

Attrib::Hash::burnoutcarasset::MasterSceneMayaBinaryFile = -4033406791020503385;

Attrib::Hash::burnoutcarasset::SoundEngineAsset = -3616434373283268524;

Attrib::Hash::burnoutcarasset::SoundExhaustAsset = -6601183205448776399;

Attrib::Hash::physicsvehiclebaseattribs::AngularDrag = -2587998968637529485;

Attrib::Hash::physicsvehiclebaseattribs::BrakeScaleToFactor = -6724323949230824050;

Attrib::Hash::physicsvehiclebaseattribs::DownForceZOffset = -7435943572713341390;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitNegY = -3280670874417285740;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitPosZ = -1666416025769953155;

Attrib::Hash::physicsvehiclebaseattribs::DrivingMass = -3787790934024483857;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurveFloorSlipRatio = -1630393006643118008;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakCoefficient = -5067077354339468201;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakSlipRatio = -4731126951183549001;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireAdhesiveLimit = -1286355289157071958;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireDynamicFrictionCoefficient = -6349451596478070934;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireLongForceBias = -1377722699248955594;

Attrib::Hash::physicsvehiclebaseattribs::FrontWheelMass = -6833821662839661425;

Attrib::Hash::physicsvehiclebaseattribs::HighSpeedAngularDamping = -8330303592681147153;

Attrib::Hash::physicsvehiclebaseattribs::LinearDrag = -8487842249909718459;

Attrib::Hash::physicsvehiclebaseattribs::LockBrakeScale = -4714331935212091080;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorStraightLine = -2858441074664930156;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorTurning = -897565922227798600;

Attrib::Hash::physicsvehiclebaseattribs::PitchDampingOnTakeOff = -5137150473961999634;

Attrib::Hash::physicsvehiclebaseattribs::PowerToFront = -8388318914847005089;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakCoefficient = -753131893419114293;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakSlipRatio = -7653661541150633661;

Attrib::Hash::physicsvehiclebaseattribs::RearLongGripCurvePeakCoefficient = -412225798706036160;

Attrib::Hash::physicsvehiclebaseattribs::RearTireAdhesiveLimit = -9041112529150658;

Attrib::Hash::physicsvehiclebaseattribs::RearTireDynamicFrictionCoefficient = -5724009369781865567;

Attrib::Hash::physicsvehiclebaseattribs::RearTireLongForceBias = -8694020640479969529;

Attrib::Hash::physicsvehiclebaseattribs::RearWheelMass = -1977907534454313347;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceFrontGripFactor = -179166364723212449;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceRoughnessFactor = -2535698590537951711;

Attrib::Hash::physicsvehiclebaseattribs::TractionLineLength = -3299690291498919306;

Attrib::Hash::physicsvehiclebaseattribs::YawDampingOnTakeOff = -1675471727477182158;

Attrib::ClassName::physicsvehiclebaseattribs = -604515486933319770;

Attrib::ClassName::physicsvehiclehandling = -7610765364513722643;

Attrib::ClassName::physicsvehicleboostattribs = -1522656162225671394;

Attrib::ClassName::physicsvehiclecollisionattribs = -2335842357891624052;

Attrib::ClassName::physicsvehicleengineattribs = -553898650669114478;

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

BrnWorld::KF_POWER_PARK_NEARBY_RADIUS = [65, 112, 0, 0];

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

CgsNetwork::K_INVALID_PLAYER_ID = -1;

CgsNetwork::KU16_MAX_FRAMES = -2;

CgsNetwork::KU8_INVALID_GAME_ID = -1;

CgsNetwork::KI8_INVALID_TYPE = -1;

CgsNetwork::KU16_INVALID_FRAME = -1;

CgsNetwork::KU16_HALF_OF_FRAMES = -32768;

CgsNetwork::KU_INVALID_FRAME = -1;

CgsNetwork::KU_HALF_OF_FRAMES = -2147483648;

CgsNetwork::KI_MAX_UINT32 = -1;

CgsNetwork::KI_MIN_INT32 = -2147483648;

CgsNetwork::KI_MIN_PLAYER_ID = -1;

CgsNetwork::KF_DEFAULT_MIN_TIME = [0, 0, 0, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME = [72, 125, 32, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME_ERROR = [60, 163, 215, 10];

CgsNetwork::KF_ONLINE_TIME_DIFFERENCE_TOLERANCE = [61, 76, 204, 205];

CgsNetwork::KE_ACK_OR_NACK;

CgsNetwork::KE_HEADER = 41;

CgsNetwork::KE_ALL_MESSAGE_TYPES = 42;

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::PI = [64, 73, 15, 219];

CgsDev::KC_DEBUG_CHARACTER_SQUARE = -128;

CgsDev::KC_DEBUG_CHARACTER_CROSS = -127;

CgsDev::KC_DEBUG_CHARACTER_CIRCLE = -126;

CgsDev::KC_DEBUG_CHARACTER_UP = -125;

CgsDev::KC_DEBUG_CHARACTER_DOWN = -124;

CgsDev::KC_DEBUG_CHARACTER_LEFT = -123;

CgsDev::KC_DEBUG_CHARACTER_RIGHT = -122;

CgsDev::KC_DEBUG_CHARACTER_DEBUG = -121;

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::audio::core::PRIORITY_PERMANENT = [66, 200, 0, 0];

rw::audio::core::PI = [64, 73, 15, 219];

rw::audio::core::CPU_CLOCK_MULTIPLIER = [66, 32, 0, 0];

rw::audio::core::PROCESSINGSTAGE_MASTERINGVOICE = -1;

rw::audio::core::DECIBEL_MIN = [196, 122, 0, 0];

rw::audio::core::LINEARGAIN_MIN = [0, 0, 0, 0];

rw::audio::core::CENTS_MIN = [199, 195, 80, 0];

rw::audio::core::LINEARPITCH_MIN = [21, 141, 145, 46];

rw::audio::core::PITCHLINEARTOCENTSCONST = [69, 121, 37, 5];

rw::audio::core::CODAERR_NOT_READY = -1;

rw::audio::core::CODAERR_UNSUPPORTED = -2;

rw::audio::core::EAXMA_HEADER_BLOCKSIZE_BITMASK = -4;

rw::datacontainer::DEFAULTBATCHSIZE = -2147483648;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

rw::math::fpu::SMALL_FLOAT = [55, 128, 0, 0];

rw::math::fpu::DEGREES_TO_RADIANS = [60, 142, 250, 53];

rw::math::fpu::RADIANS_TO_DEGREES = [66, 101, 46, 225];

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::PI = [64, 73, 15, 219];

rw::math::fpu::TWO_PI = [64, 201, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::MATRIX_MIN_SLERP_ANGLE = [61, 14, 250, 53];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

rw::math::fpu::MINIMUM_RECIPROCAL = [0, 32, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

